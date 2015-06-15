/*
** my_printf_func.c for printf in /home/monge_p/personnel/C_MyLib/src/my_printf
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Mon Jun 15 20:06:22 2015 Pierre Monge
** Last update Mon Jun 15 22:48:48 2015 Pierre Monge
*/

#include "C_MyLib_printf.h"

int		my_printf(const char *format, ...)
{
  va_list	ap;
  int		ret;

  va_start(ap, format);
  ret = _my_printf(STDOUT_FILENO, NULL, format, ap);
  va_end(ap);
  return (ret);
}

int		my_fprintf(int fd, const char *format, ...)
{
  va_list	ap;
  int		ret;

  va_start(ap, format);
  ret = _my_printf(fd, NULL, format, ap);
  va_end(ap);
  return (ret);
}

int		my_sprintf(char *str, const char *format, ...)
{
  va_list	ap;
  int		ret;

  va_start(ap, format);
  ret = _my_printf(-1, str, format, ap);
  va_end(ap);
  return (ret);
}
