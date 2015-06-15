/*
** my_error.c for error in /home/monge_p/personnel/C_MyLib/src/error_func
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sun May 31 16:35:05 2015 Pierre Monge
** Last update Sun Jun  7 23:29:05 2015 Pierre Monge
*/

#include "C_MyLib_GEN.h"
#include "C_MyLib_error.h"
#include "C_MyLib_bool.h"

/*
** Write basic error on output 2
*/

char	*my_char_error(char *error, char *color)
{
  if (color)
    write(2, color, my_strlen(color));
  if (error)
    write(2, error, my_strlen(error));
  write(2, OFF_COLOR, my_strlen(OFF_COLOR));
  return (NULL);
}

int	my_int_error(char *error, char *color)
{
  if (color)
    write(2, color, my_strlen(color));
  if (error)
    write(2, error, my_strlen(error));
  write(2, OFF_COLOR, my_strlen(OFF_COLOR));
  return (-1);
}

t_bool	my_bool_error(char *error, char *color)
{
  if (color)
    write(2, color, my_strlen(color));
  if (error)
    write(2, error, my_strlen(error));
  write(2, OFF_COLOR, my_strlen(OFF_COLOR));
  return (FALSE);
}

void	*my_void_error(char *error, char *color)
{
  if (color)
    write(2, color, my_strlen(color));
  if (error)
    write(2, error, my_strlen(error));
  write(2, OFF_COLOR, my_strlen(OFF_COLOR));
  return (NULL);
}
