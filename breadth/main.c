/*
** main.c for dante in /home/byliarus/work/AI/dante/breadth/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Fri Apr 28 15:54:25 2017 Pierre Narcisi
** Last update Sun May 14 22:40:28 2017 Pierre Narcisi
*/

#include "breadth.h"

int		check_map(t_tools *tools)
{
  int		i;

  i = 0;
  while (tools->map[i])
    {
      if (tools->map[i] != '*' &&
       tools->map[i] != 'X' && tools->map[i] != '\n')
	return (-1);
      i++;
    }
  return (0);
}

int		main(int ac, char **av)
{
  t_tools	*tools;

  if (!(tools = malloc (sizeof (t_tools))))
    return (0);
  if (ac != 2)
    return (0);
  else
    {
      if (parsing(av[1], tools) == 84)
        return (84);
      algo(tools);
      printf("%s\n", tools->map);
      munmap(tools->map, tools->len);
    }
  free(tools);
  return (0);
}
