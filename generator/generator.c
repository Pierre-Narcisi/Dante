/*
** generator.c for generator in /home/axel/projects/progress/dante/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Thu Apr 20 12:18:59 2017 Axel Vandenabeele
** Last update Wed May 10 15:50:51 2017 Axel Vandenabeele
*/

#include "generator.h"

void 	fill_file(int op, t_tools* tools)
{
	int	lines;

	lines = 0;
	while (tools->maze[lines])
	{
		write(op, tools->maze[lines], my_strlen(tools->maze[lines]));
		write(op, "\n", 1);
		lines++;
	}
}

void 	generator(t_tools* tools)
{
	int	lines;
	int	x;
	int	op;

	lines = 0;
	if ((op = open("maze.txt", O_CREAT | O_TRUNC | O_RDWR, 0666)) == -1)
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
		tools->maze[lines][x] = '\0';
		lines++;
	}
	tools->maze[lines] = NULL;
	algo(tools);
	fill_file(op, tools);
}
