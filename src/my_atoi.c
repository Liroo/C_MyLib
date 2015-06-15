/*
** my_atoi.c for atoi in /home/monge_p/personnel/C_MyLib/src
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sun May 31 18:01:25 2015 Pierre Monge
** Last update Mon Jun  8 08:59:28 2015 Pierre Monge
*/

/*
** Convert a string into an integer
** Convert stop at first non-numerical/digit value
** First char could be '-' to specify negativ value
*/

int	my_atoi(char *str)
{
  int	c;
  long	result;

  result = 0;
  c = (str[0] == '-') ? 1 : 0;
  while (str[c])
    {
      if (str[c] >= '0' && str[c] <= '9')
	result = (result * 10) + (str[c] - '0');
      else
	{
	  if (str[0] == '-')
	    result *= -1;
	  return ((int)result);
	}
      c++;
    }
  if (str[0] == '-')
    result *= -1;
  return ((int)result);
}
