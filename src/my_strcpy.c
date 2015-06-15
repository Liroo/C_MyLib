/*
** my_strcpy.c for strcpy / strncpy in /home/monge_p/personnel/C_MyLib/src
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sun May 31 16:55:54 2015 Pierre Monge
** Last update Mon Jun  8 09:07:43 2015 Pierre Monge
*/

#include "C_MyLib_GEN.h"

char	*my_strcpy(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s2[i] != 0)
    {
      s1[i] = s2[i];
      i++;
    }
  s1[i] = 0;
  return (s1);
}

char	*my_strncpy(char *s1, char *s2, size_t n)
{
  int	i;

  i = 0;
  while (s2[i] != 0 && i < (int)n)
    {
      s1[i] = s2[i];
      i++;
    }
  s1[i] = 0;
  return (s1);
}
