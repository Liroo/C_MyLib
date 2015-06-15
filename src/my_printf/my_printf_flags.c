/*
** my_printf_flags.c for flags in /home/monge_p/personnel/C_MyLib/src/my_printf
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Mon Jun 15 23:37:54 2015 Pierre Monge
** Last update Tue Jun 16 00:00:06 2015 Pierre Monge
*/

#include "C_MyLib_printf.h"

int		_my_printf_flag_c(t_printf *pf, va_list ap)
{
  unsigned char	c;
  c = (unsigned char)va_arg(ap, int);
  return (_my_printf_putchar(pf, c));
}

int	_my_printf_flag_s(t_printf *pf, va_list ap)
{
  char	*str;

  str = va_arg(ap, char *);
  if (str == NULL)
    str = "(null)";
  return (_my_printf_putstr(pf, str));
}

int	_my_printf_flag_d(t_printf *pf, va_list ap)
{
  int	ret;
  int	nb;

  nb = va_arg(ap, int);
  if (nb < 0)
    ret += _my_printf_putchar(pf, '-');
  else
    nb *= -1;
  _my_printf_flag_d_put(pf, nb, &ret);
  return (ret);
}

int	_my_printf_flag_perc(t_printf *pf, va_list ap)
{
  return (_my_printf_putchar(pf, '%'));
}
