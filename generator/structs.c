/*
** structs.c for structs in /home/axel/projects/progress/dante/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Wed Apr 26 13:46:12 2017 Axel Vandenabeele
** Last update Fri Apr 28 16:50:22 2017 Pierre Narcisi
*/

#include "generator.h"

t_tools	*set_struct(char **av, int ac)
{
	t_tools* tools;

	if ((tools = malloc(sizeof(t_tools))) == NULL)
		exit (84);
	if (my_isnum(av[1]) == 1)
		exit (84);
	if (my_isnum(av[2]) == 1)
		exit (84);
	else if (ac == 4 && strcmp(av[3], "perfect") == 0)
		tools->p = 1;
	else
			tools->p = 0;
	tools->x = atoi(av[1]);
	tools->y = atoi(av[2]);
	return (tools);
}
