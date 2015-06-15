/*
** my_printf_put.c for put in /home/monge_p/personnel/C_MyLib/src/my_printf
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Mon Jun 15 23:21:55 2015 Pierre Monge
** Last update Tue Jun 16 00:06:07 2015 Pierre Monge
*/

#include "C_MyLib_GEN.h"
#include "C_MyLib_printf.h"

int	_my_printf_putchar_at(t_printf *pf, char c, int pos)
{
  if (pf->fd == -1)
    pf->str[pf->printed + pos] = c;
  else
    write(pf->fd, &c, 1);
  return (1);
}

int	_my_printf_putchar(t_printf *pf, char c)
{
  if (pf->fd == -1)
    pf->str[pf->printed] = c;
  else
    write(pf->fd, &c, 1);
  return (1);
}

int	_my_printf_putstr(t_printf *pf, char *str)
{
  int	len;
  int	i;

  i = 0;
  if ((len = my_strlen(str)) == 0)
    return (0);
  if (pf->fd == -1)
    {
      while (i < len)
	{
	  pf->str[pf->printed + i] = str[i];
	  i++;
	}
    }
  else
    write(pf->fd, str, len);
  return (len);
}
