/*
** my_printf_flags_d.c for flags d in /home/monge_p/personnel/C_MyLib/src/my_printf
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Mon Jun 15 22:54:29 2015 Pierre Monge
** Last update Mon Jun 15 23:53:48 2015 Pierre Monge
*/

#include "C_MyLib_printf.h"

void	_my_printf_flag_d_put(t_printf *pf, int nb, int *r)
{
  if (nb <= -10)
    _my_printf_flag_d_put(pf, nb / 10, r);
  *r += _my_printf_putchar_at(pf, '0' - (nb % 10), *r);
  return ;
}
