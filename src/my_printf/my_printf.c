/*
** my_printf.c for printf in /home/monge_p/personnel/C_MyLib/src/my_printf
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Mon Jun 15 20:25:45 2015 Pierre Monge
** Last update Mon Jun 15 23:09:09 2015 Pierre Monge
*/

#include "C_MyLib_error.h"
#include "C_MyLib_printf.h"

char	*_my_printf_init_flags()
{
  char	*pf_flags;

  if ((pf_flags = malloc(sizeof(char) * (FLAGS + 1))) == NULL)
    return (NULL);
  pf_flags[0] = 'c';
  pf_flags[1] = 's';
  pf_flags[2] = 'd';
  pf_flags[3] = '%';
  pf_flags[FLAGS] = '\0';
  return (pf_flags);
}

t_printf_func	*_my_printf_init_func()
{
  t_printf_func	*pf_func;

  if ((pf_func = malloc(sizeof(t_printf_func) * (FLAGS + 1))) == NULL)
    return (NULL);
  pf_func[0] = (t_printf_func)&_my_printf_flag_c;
  pf_func[1] = (t_printf_func)&_my_printf_flag_s;
  pf_func[2] = (t_printf_func)&_my_printf_flag_d;
  pf_func[3] = (t_printf_func)&_my_printf_flag_perc;
  pf_func[FLAGS] = NULL;
  return (pf_func);
}

t_printf	*_my_printf_init(int fd, char *str)
{
  t_printf	*pf;

  if ((pf = malloc(sizeof(t_printf))) == NULL ||
      (pf->printf_flags = _my_printf_init_flags()) == NULL ||
      (pf->printf_func = _my_printf_init_func()) == NULL)
    {
      my_error_set(MEM);
      return (NULL);
    }
  pf->str = str;
  pf->fd = fd;
  pf->printed = 0;
  return (pf);
}

void		_my_printf_free(t_printf *pf)
{
  free(pf->printf_flags);
  free(pf->printf_func);
  free(pf);
  return ;
}

int		_my_printf(int fd, char *str, const char *format, va_list ap)
{
  int		ret;
  t_printf	*pf;

  if ((pf = _my_printf_init(fd, str)) == NULL)
    return (-1);
  _my_printf_exec(pf, format, ap);
  ret = pf->printed;
  _my_printf_free(pf);
  return (ret);
}
