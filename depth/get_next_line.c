/*
** get_next_line.c for get_next_line in /home/axel/projects/progress/PSU_2016/tetris
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu@epitech.eu>
**
** Started on  Sun Jan 15 12:13:44 2017 Axel Vandenabeele
** Last update Wed May 10 17:31:25 2017 Axel Vandenabeele
*/

#include "depth.h"
#include "get_next_line.h"

char	*my_realloc(char *str, int i)
{
  char	*tmp;

  if (!(tmp = malloc(sizeof(char) * (i + 2))))
    return (NULL);
  tmp = my_strdup(str, tmp);
  free(str);
  return (tmp);
}

char	*fill_str(char *str, char *tmp, int rd, const int fd)
{
  int 	i;

  i = 0;
  while (tmp[0] != '\n' && rd > 0)
    {
      str[i++] = tmp[0];
      str[i] = '\0';
      if (!(str = my_realloc(str, i)))
	return (NULL);
      rd = read(fd, tmp, 1);
    }
  str[i] = '\0';
  return (str);
}

char	*get_next_line(const int fd)
{
  int	rd;
  char	*str;
  char	*tmp;

  if (!(tmp = malloc(sizeof(char) * (READ_SIZE + 1))))
    return (NULL);
  if ((rd = read(fd, tmp, 1)) <= 0)
    {
      free(tmp);
      return (NULL);
    }
  if (!(str = malloc(sizeof(char) * (READ_SIZE + 1))))
    return (NULL);
  if (!(str = fill_str(str, tmp, rd, fd)))
    return (NULL);
  free(tmp);
  return (str);
}
