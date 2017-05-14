/*
** main.c for dante in /home/byliarus/work/AI/dante/breadth/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Fri Apr 28 15:54:25 2017 Pierre Narcisi
** Last update Sun May 14 23:10:21 2017 Pierre Narcisi
*/

#include "astar.h"

int		main(int ac, char **av)
{
  printf("no solutions found\n");
  return (84);
  t_tools	*tools;

  if (!(tools = malloc (sizeof (t_tools))))
    return (84);
  if (ac != 2)
    return (0);
  else
    {
      parsing(av[1], tools);
      algo(tools);
      munmap(tools->map, tools->len);
    }
  free(tools);
  return (0);
}
