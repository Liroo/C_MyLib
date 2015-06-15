/*
** my_printf_vfunc.c for vprintf in /home/monge_p/personnel/C_MyLib/src/my_printf
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Mon Jun 15 20:06:13 2015 Pierre Monge
** Last update Mon Jun 15 22:58:58 2015 Pierre Monge
*/

#include "C_MyLib_printf.h"

int	my_vprintf(const char *format, va_list ap)
{
  return (_my_printf(STDOUT_FILENO, NULL, format, ap));
}

int	my_vfprintf(int fd, const char *format, va_list ap)
{
  return (_my_printf(fd, NULL, format, ap));
}

int	my_vsprintf(char *str, const char *format, va_list ap)
{
  return (_my_printf(-1, str, format, ap));
}
