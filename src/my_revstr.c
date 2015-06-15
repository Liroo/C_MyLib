/*
** my_revstr.c for revstr in /home/monge_p/personnel/C_MyLib/src
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Mon Jun  8 13:41:49 2015 Pierre Monge
** Last update Sat Jun 13 04:19:53 2015 Pierre Monge
*/

#include "C_MyLib_GEN.h"

char    *my_revstr(char *src)
{
  char	*p1;
  char	*p2;
  char	tmp;

  p1 = src;
  p2 = p1 + my_strlen(src) - 2;
  while (p1 < p2)
    {
      tmp = *p1;
      *p1 = *p2;
      *p2 = tmp;
      p1++;
      p2--;
    }
  return (src);
}
