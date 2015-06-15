/*
** C_MyLib_printf.c for printf in /home/monge_p/personnel/C_MyLib/include
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sun Jun  7 23:49:50 2015 Pierre Monge
** Last update Mon Jun 15 23:56:49 2015 Pierre Monge
*/

#ifndef		__C_MYLIB_PRINTF_H_
# define       	__C_MYLIB_PRINTF_H_

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define	FLAGS	4
# define	ARG	"Invalid argument\n"

typedef	int	(*t_printf_func)(void *, va_list);

typedef	struct	s_printf
{
  char		*printf_flags;
  t_printf_func	*printf_func;
  char		*str;
  int		fd;
  int		printed;
}		t_printf;

/*
** printf on a specified format on output 1
** if error is detected, my_error is set on
** return the number of char printed
** flags = csd
*/

int	my_printf(const char *format, ...);
int	my_vprintf(const char *format, va_list);
int	my_sprintf(char *, const char *format, ...);
int	my_vsprintf(char *, const char *format, va_list);
int	my_fprintf(int fd, const char *format, ...);
int	my_vfprintf(int fd, const char *format, va_list);

/*
** exec
*/

int    	_my_printf(int fd, char *, const char *format, va_list);

/*
** flags
*/

int	_my_printf_flag_c(t_printf *pf, va_list);
int	_my_printf_flag_s(t_printf *pf, va_list);
int	_my_printf_flag_d(t_printf *pf, va_list);
void	_my_printf_flag_d_put(t_printf *pf, int nb, int *);
int	_my_printf_flag_perc(t_printf *pf, va_list);

/*
**
*/
int	_my_printf_putchar(t_printf *pf, char);
int	_my_printf_putchar_at(t_printf *pf, char, int pos);
int	_my_printf_putstr(t_printf *pf, char *str);

#endif		/* !__C_MYLIB_PRINTF_H_ */
