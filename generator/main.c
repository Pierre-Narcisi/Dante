/*
** main.c for main in /home/axel/projects/progress/dante/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Wed Apr 26 13:49:34 2017 Axel Vandenabeele
** Last update Fri Apr 28 16:49:41 2017 Pierre Narcisi
*/

#include "generator.h"

void 	pre_requis(int ac)
{
	if (ac != 3 && ac != 4)
		exit (84);
}

int	main(int ac, char **av)
{
	t_tools* tools;

	pre_requis(ac);
	tools = set_struct(av, ac);
	generator(tools);
	return (0);
}
