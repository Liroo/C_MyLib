/*
** my_strcmp.c for strcmp in /home/monge_p/personnel/C_MyLib/src
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sun May 31 17:20:53 2015 Pierre Monge
** Last update Fri Jun  5 17:42:28 2015 Pierre Monge
*/

#include "C_MyLib_GEN.h"

/*
** my_strcmp -> Compare two strings pointed by s1 and s2.
** return 0 if the string are the same or return the diff
** on the first inequality of char
** my_strcmp -> my_strncmp but for the 'n' first character
*/

int	my_strcmp(const char *s1, const char *s2)
{
  while (*s1 == *s2 && *s1 && *s2)
    {
      s1++;
      s2++;
    }
  return (*s1 - *s2);
}

int	my_strncmp(const char *s1, const char *s2, size_t n)
{
  while (--n > 0)
    {
      if (*s1 != *s2)
	return (*s1 - *s2);
      else if (*s1 == 0)
	return (0);
      s1++;
      s2++;
    }
  return (0);
}

/*
** return 0 if the string pointed by start is at the begining of
** the string pointer by str
*/

int	my_strcmp_start(char *str, char *start)
{
  if (my_strncmp(start, str, my_strlen(start)) == 0)
    return (1);
  return (0);
}

/*
** return 0 if the string pointed by start is at the end of
** the string pointer by str
*/

int	my_strcmp_end(char *str, char *end)
{
  int   strlen;
  int	endlen;

  strlen = my_strlen(str);
  endlen = my_strlen(end);
  if (strlen < endlen)
    return (0);
  if (my_strncmp(end, str + strlen - endlen, endlen) == 0)
    return (1);
  return (0);
}
