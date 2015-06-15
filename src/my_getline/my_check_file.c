/*
** my_check_file.c for check_file in /home/monge_p/MUL_2014_rtracer/src/parsing
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sun Jun  7 23:22:27 2015 Pierre Monge
** Last update Tue Jun 16 00:22:39 2015 Pierre Monge
*/

#include "C_MyLib_getline.h"

/*
** Send path of a file, return TRUE if file exist
** return FALSE and set my_error() to the error specified
*/

int	my_check_file(char *path)
{
  int	fd;

  if ((fd = open(path, O_DIRECTORY)) == -1)
    {
      if ((fd = open(path, O_RDONLY)) == -1)
	return (-1);
      else
	{
	  if (close(fd) == -1)
	    return (-1);
	  return (0);
	}
    }
  else
    {
      if (close(fd) == -1)
	return (-1);
    }
  return (-1);
}
