/*
** C_MyLib_getline.h for getline in /home/monge_p/personnel/C_MyLib/include
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sun Jun  7 23:14:32 2015 Pierre Monge
** Last update Tue Jun 16 00:22:53 2015 Pierre Monge
*/

#ifndef		__C_MYLIB_GETLINE_H_
# define	__C_MYLIB_GETLINE_H_

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>

# define	BUFFER_SIZE	1028

/*
** get line per line with a name of a file, or a string, use mode to specified
** mode 0 is for a string, 1 is for a path_file
*/

char	*my_getline(char *, char *, int);
void	my_getline_reset(char **, int *, int *);

/*
** Check if file exist and is not a directory
*/

int	my_check_file(char *);

#endif		/* !__C_MYLIB_GETLINE_H_ */
