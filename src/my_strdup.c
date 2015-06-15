/*
** my_strdup.c for strdup in /home/monge_p/personnel/C_MyLib/src
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sun May 31 16:23:24 2015 Pierre Monge
** Last update Sun Jun 14 20:23:56 2015 Pierre Monge
*/

#include "C_MyLib_GEN.h"
#include "C_MyLib_error.h"

/*
** my_strdup -> return a malloced copy of the
** string pointed by s1 in a new pointer .
*/

char	*my_strdup(char *s1)
{
  int	i;
  char	*new;

  i = 0;
  if (s1 == NULL)
    return (NULL);
  if ((new = malloc(sizeof(char) * (my_strlen(s1) + 1))) == NULL)
    {
      my_set_error(MEM);
      return (NULL);
    }
  while (s1[i] > 0)
    {
      new[i] = s1[i];
      i++;
    }
  new[i] = 0;
  return (new);
}
