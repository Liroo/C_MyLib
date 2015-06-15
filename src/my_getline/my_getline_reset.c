/*
** parsing_getline_reset.c for getline in /home/monge_p/personnel/C_MyLib/src/my_getline
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sun Jun  7 23:12:58 2015 Pierre Monge
** Last update Sun Jun  7 23:28:14 2015 Pierre Monge
*/

#include "C_MyLib_getline.h"

void	my_getline_reset(char **file, int *end_line, int *done)
{
  free(*file);
  *file = NULL;
  *end_line = 0;
  *done = 1;
  return ;
}
