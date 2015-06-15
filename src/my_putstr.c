/*
** my_putstr.c for my_putstr in /home/monge_p/personnel/C_MyLib/src
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sat May 30 16:23:49 2015 Pierre Monge
** Last update Sun Jun 14 19:46:09 2015 Pierre Monge
*/

#include "C_MyLib_GEN.h"

/*
** output on current tty a char specified
** return 1
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (1);
}

/*
** my_putstr -> output on current tty a string specified
** String must be ended by a char '\0'
** my_putnstr -> output on current tty 'n' char from string specified
** String must be ended by a char '\0'
*/

int	my_putnstr(char *str, int n)
{
  int	n_save;

  n_save = n;
  if (str == NULL)
    {
      my_putstr("(null)");
      return (6);
    }
  while (*str && n > 0)
    {
      write(1, &(*str++), 1);
      n--;
    }
  return (n_save - n);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    {
      my_putstr("(null)");
      return (6);
    }
  else
    {
      while (str[i] > 0)
	{
	  write(1, &(str[i]), 1);
	  i++;
	}
    }
  return (i);
}
