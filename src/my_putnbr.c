/*
** my_putnbr.c for putnbr in /home/monge_p/personnel/C_MyLib/src
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Mon Jun  8 10:49:02 2015 Pierre Monge
** Last update Sun Jun 14 19:56:13 2015 Pierre Monge
*/

#include "C_MyLib_GEN.h"

int	my_pow(int pow)
{
  int	pow_done;

  pow_done = 1;
  while (pow > 0)
    {
      pow_done *= 10;
      pow--;
    }
  return (pow_done);
}

int	my_putnbr_write(int car, int nbr_save, int writed)
{
  char	nbr_put[car + 1];
  int	i;

  i = 0;
  while (car > 0)
    {
      nbr_put[i++] = nbr_save % my_pow(car) / my_pow(car - 1) + 48;
      car--;
    }
  nbr_put[i] = 0;
  return (writed + my_putstr(nbr_put));
}

int	my_putnbr(int nbr)
{
  int	writed;
  int	nbr_save;
  int	car;

  car = 0;
  writed = 0;
  if (nbr < 0)
    {
      writed += 1;
      my_putchar('-');
      nbr *= -1;
    }
  nbr_save = nbr;
  while (nbr != 0)
    {
      nbr /= 10;
      car += 1;
    }
  return (my_putnbr_write(car, nbr_save, writed));
}
