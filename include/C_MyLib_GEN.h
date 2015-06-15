/*
** C_MyLib_GEN.h for GEN in /home/monge_p/personnel/C_MyLib
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sat May 30 16:31:05 2015 Pierre Monge
** Last update Mon Jun  8 13:37:54 2015 Pierre Monge
*/

#ifndef		__C_MYLIB_GEN_H_
# define       	__C_MYLIB_GEN_H_

# include <unistd.h>
# include <stdlib.h>

/*
** Count char in char a string
*/

int	my_strlen(char *);

/*
** reversing a string pointed by *s1
*/

char	*my_revstr(char *s1);

/*
** return a new pointer to a copy of char *s1
*/

char	*my_strdup(char *s1);

/*
** Copying func
*/

char	*my_strcpy(char *, char *);
char	*my_strncpy(char *, char *, size_t);
char	*my_strcat(char *, char *);
char	*my_strncat(char *, char *, size_t);

/*
** Comparing string func
*/

int	my_strcmp(const char *, const char *);
int	my_strncmp(const char *, const char *, size_t);
int	my_strcmp_start(char *, char *);
int	my_strcmp_end(char *, char *);

/*
** Convert string to int
*/

int	my_atoi(char *);

/*
** output func
*/

int	my_putstr(char *);
int	my_putnstr(char *, int);
int	my_putchar(char);
int	my_putnbr(int);

#endif		/* !__C_MYLIB_GEN_H_ */
