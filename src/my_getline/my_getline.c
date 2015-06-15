/*
** parsing_getline.c for getline in /home/monge_p/personnel/C_MyLib/src/my_getline
**
** Made by Pierre Monge
** Login   <monge_p@epitech.net>
**
** Started on  Sun Jun  7 23:13:11 2015 Pierre Monge
** Last update Sun Jun  7 23:20:31 2015 Pierre Monge
*/

#include "C_MyLib_getline.h"

int	my_getline_getfile_len(const int fd)
{
  char	buf[BUFFER_SIZE];
  int	ret;
  int	try;

  ret = 0;
  try = 1;
  while (try > 0)
    {
      if ((try = read(fd, buf, BUFFER_SIZE - 1)) == -1)
	return (-1);
      buf[try] = '\0';
      ret += try;
    }
  return (ret);
}

char	*my_getline_getfile(char *file_path)
{
  int	ret;
  char	*file;
  int	try;
  int	fd;

  file = NULL;
  if ((fd = open(file_path, O_RDONLY)) <= 0)
     return (NULL);
  if ((ret = my_getline_getfile_len(fd)) == -1)
    return (NULL);
  if (close(fd) == -1)
    return (NULL);
  if ((fd = open(file_path, O_RDONLY)) <= 0)
    return (NULL);
  if ((file = malloc(sizeof(char) * ret + 1)) == NULL)
    return (NULL);
  if ((try = read(fd, file, ret)) == -1)
    return (NULL);
  file[try] = '\0';
  if (close(fd) == -1)
    return (NULL);
  return (file);
}

char	*my_getline_result(int *begin, int end, int to_malloc,
				  char *file)
{
  char	*line;
  int	i;

  i = 0;
  line = NULL;
  if ((line = malloc(sizeof(char) * to_malloc)) == NULL)
    return (NULL);
  while (file[(*begin)] && (*begin) != end -  1)
    line[i++] = file[(*begin)++];
  line[i] = '\0';
  *begin = end;
  return (line);
}

void	my_getline_get_malloc(int end_line, int *i,
				     int *to_malloc, char *file)
{
  if ((*i = end_line) != 0)
    *i += 1;
  while (file[(*i)] && file[(*i)++] != '\n')
    (*to_malloc)++;
  return ;
}

/*
** this get next line works only once in program with only one file
** 1 for file_path
** 2 for file
*/

char		*my_getline(char *file_path, char *str, int mode)
{
  static int	end_line = 0;
  static char	*file = NULL;
  static int	done = 0;
  int		i;
  int		to_malloc;
  char		*line;

  to_malloc = 0;
  line = NULL;
  if (done == 1)
    {
      done = 0;
      return (NULL);
    }
  if (mode == 0)
    file = str;
  if (file == NULL)
    if ((file = my_getline_getfile(file_path)) == NULL)
      return (NULL);
  my_getline_get_malloc(end_line, &i, &to_malloc, file);
  line = my_getline_result(&end_line, i, to_malloc + 2, file);
  if (file[i] == 0)
    my_getline_reset(&file, &end_line, &done);
  return (line);
}
