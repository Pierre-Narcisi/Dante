/*
** parsing.c for dante in /home/byliarus/work/AI/dante/breadth/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Fri Apr 28 15:54:31 2017 Pierre Narcisi
** Last update Sun May 14 22:21:20 2017 Pierre Narcisi
*/

#include "breadth.h"

int	line_len(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\n' && str[i] != '\0')
    i++;
  return (i);
}

int		parsing(char *str, t_tools *tools)
{
  int		fd;
  struct stat	file;

  if (stat(str, &file) == -1)
    return (84);
  if (!(fd = open(str, O_RDWR)))
    return (84);
  if (file.st_size == 0)
    return (84);
  if (!(tools->map = malloc (sizeof (char) * file.st_size)))
    return (84);
  if (read(fd, tools->map, file.st_size) == -1)
    return (84);
  tools->x = line_len(tools->map) + 1;
  tools->len = file.st_size;
  return (0);
}
