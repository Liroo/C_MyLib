/*
** my_printf_exec.c for my_printf_exec in /home/monge_p/personnel/C_MyLib/src/my_printf
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Mon Jun 15 22:42:55 2015 Pierre Monge
** Last update Tue Jun 16 00:04:27 2015 Pierre Monge
*/

#include "C_MyLib_printf.h"

int	_my_printf_exec_get_flag(t_printf *pf, const char *format, int *i)
{
  int	flag;
  int	pos;

  flag = 0;
  pos = 1;
  while (format[*i + pos] == ' ')
    pos += 1;
  if (format[*i + pos] == '\0')
    return (-2);
  while (flag < FLAGS)
    {
      if (pf->printf_flags[flag] == format[*i + pos])
	{
	  *i += pos;
	  return (flag);
	}
      flag++;
    }
  return (-1);
}

void	_my_printf_exec(t_printf *pf, const char *format, va_list ap)
{
  int	i;
  int	flag;

  i = 0;
  flag = 0;
  while (format[i])
    {
      if (format[i] == '%' &&
	  (flag = _my_printf_exec_get_flag(pf, format, &i)) >= 0)
	pf->printed += (pf->printf_func[flag])(pf, ap);
      else if (flag == -2)
	{
	  my_error_set(ARG);
	  pf->printed = -1;
	  return ;
	}
      else
	pf->printed += _my_printf_putchar(pf, format[i]);
      i++;
    }
  return ;
}
