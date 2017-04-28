/*
** generator.c for generator in /home/axel/projects/progress/dante/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Thu Apr 20 12:18:59 2017 Axel Vandenabeele
** Last update Fri Apr 28 16:49:31 2017 Pierre Narcisi
*/

#include "generator.h"

void 	generator(t_tools* tools)
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
		if ((tools->maze[lines] = malloc(sizeof(char) *
				(tools->x + 1))) == NULL)
			exit (84);
		while (x < tools->x)
		{
			tools->maze[lines][x] = 'X';
			x++;
		}
		lines++;
	}
	algo(tools);
	print_tab(tools->maze);
}
