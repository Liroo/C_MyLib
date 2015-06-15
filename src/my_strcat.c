/*
** my_strcat.c for strcat / strncat in /home/monge_p/personnel/C_MyLib/src
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sun May 31 17:02:21 2015 Pierre Monge
** Last update Mon Jun  8 10:05:32 2015 Pierre Monge
*/

#include "C_MyLib_GEN.h"

/*
** my_strcat -> append a copy of the string pointed by
** s2 to the end of the string pointed by s1.
** s1 null byte is erased, but a null byte is set at the end of the
** final string pointed by s1.
** my_strncat -> my_strcat but copy only 'n' chararacter from s2
*/

char	*my_strcat(char *s1, char *s2)
{
  my_strcpy(&(s1[my_strlen(s1) - 1]), s2);
  return (s1);
}

char	*my_strncat(char *s1, char *s2, size_t n)
{
  my_strncpy(&(s1[my_strlen(s1) - 1]), s2, n);
  return (s1);
}
