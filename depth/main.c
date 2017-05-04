/*
** main.c for main in /home/axel/projects/progress/dante/solver1/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Mon May  1 15:26:51 2017 Axel Vandenabeele
** Last update Wed May  3 12:53:38 2017 Axel Vandenabeele
*/

#include "depth.h"

int	pre_requis(int ac, char **av)
{
	int	op;

	if (ac != 2)
		exit (84);
	if ((op = open(av[1], O_RDONLY)) == -1)
		exit (84);
	return (op);
}

int main(int ac, char **av)
{
	int	op;
	t_tools*	tools;

	op = pre_requis(ac, av);
	tools = set_tools(op, av);
  solver(tools);
  return (0);
}
