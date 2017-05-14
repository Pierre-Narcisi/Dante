/*
** generator.c for generator in /home/axel/projects/progress/dante/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Thu Apr 20 12:18:59 2017 Axel Vandenabeele
** Last update Sun May 14 19:51:44 2017 Axel Vandenabeele
*/

#include "generator.h"

void 	fill_file(t_tools* tools)
{
	int	lines;

	lines = 0;
	while (tools->maze[lines])
	{
		write(1, tools->maze[lines], my_strlen(tools->maze[lines]));
		if (lines != tools->y - 1)
			write(1, "\n", 1);
		lines++;
	}
}

void 	generator(t_tools* tools)
{
	int	lines;
	int	x;

	lines = 0;
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
		tools->maze[lines][x] = '\0';
		lines++;
	}
	tools->maze[lines] = NULL;
	algo(tools);
	fill_file(tools);
}
