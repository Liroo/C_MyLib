/*
** my_set_error.c for set_error in /home/monge_p/personnel/C_MyLib/src/my_error
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sun Jun 14 20:01:41 2015 Pierre Monge
** Last update Tue Jun 16 00:23:51 2015 Pierre Monge
*/

#include <unistd.h>
#include <stdlib.h>

void		my_error_set(char *error)
{
  static char	*error_display = NULL;

  if (error == NULL)
    {
      if (error_display != NULL)
	write(2, error_display, my_strlen(error_display));
    }
  else
    error_display = error;
  return ;
}
