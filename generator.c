/*
** generator.c for generator in /home/axel/projects/progress/dante/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Thu Apr 20 12:18:59 2017 Axel Vandenabeele
** Last update Wed Apr 26 13:50:17 2017 Axel Vandenabeele
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
