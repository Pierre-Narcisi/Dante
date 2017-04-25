/*
** generator.c for generator in /home/axel/projects/progress/dante/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Thu Apr 20 12:18:59 2017 Axel Vandenabeele
** Last update Tue Apr 25 17:06:11 2017 Pierre Narcisi
*/

#include "my.h"

void 	generator(char **av, t_tools* tools)
{
	int	lines;
	int	x;

	lines = 0;
	if ((open("maze.txt", O_CREAT | O_TRUNC | O_RDWR, 0666)) == -1)
		exit (84);
	if ((tools->maze = malloc(sizeof(char *) * (tools->y + 1))) == NULL)
		exit (84);
	while (lines < tools->y)
	{
		x = 0;
		if ((tools->maze[lines] = malloc(sizeof(char) * (tools->x + 1))) == NULL)
			exit (84);
		while (x < tools->x)
		{
			tools->maze[lines][x] = 'X';
			x++;
		}
		lines++;
	}
	(void)av;
	algo(tools);
	print_tab(tools->maze);
}

t_tools	*set_struct(char **av)
{
	t_tools* tools;

	if ((tools = malloc(sizeof(t_tools))) == NULL)
		exit (84);
	if (my_isnum(av[1]) == 1)
		exit (84);
	if (my_isnum(av[2]) == 1)
		exit (84);
	tools->x = atoi(av[1]);
	tools->y = atoi(av[2]);
	return (tools);
}

int	main(int ac, char **av)
{
	t_tools* tools;

	if (ac != 3)
		return (84);
	if ((tools = malloc(sizeof(t_tools))) == NULL)
		return (84);
	tools = set_struct(av);
	generator(av, tools);
	(void)av;
	return (0);
}
