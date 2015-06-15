/*
** C_MyLib_error.h for error in /home/monge_p/personnel/C_MyLib/include
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sun May 31 20:00:40 2015 Pierre Monge
** Last update Sun Jun 14 20:03:13 2015 Pierre Monge
*/

#ifndef		__C_MYLIB_ERROR_H_
# define	__C_MYLIB_ERROR_H_

/*
** Color define
*/

# define	RED_COLOR	"\033[1;31m"
# define	OFF_COLOR	"\033[0m"

/*
** Info output
*/

# define	MEM	"> Not enought memory !\n"

/*
** error func
*/

char	*my_char_error(char *error, char *color);
int	my_int_error(char *error, char *color);
void	*my_void_error(char *error, char *color);
char	my_bool_error(char *error, char *color);

/*
** Include for my error
*/

void	my_error_set(char *);
int	my_error();

#endif		/* !__C_MYLIB_ERROR_H_ */
