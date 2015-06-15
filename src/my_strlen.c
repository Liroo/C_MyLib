/*
** my_strlen.c for strlen in /home/monge_p/personnel/C_MyLib/src
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sat May 30 21:01:00 2015 Pierre Monge
** Last update Sun May 31 20:10:00 2015 Pierre Monge
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i++] > 0);
  return (i);
}
