/*
** set_maze.c for set_maze in /home/axel/projects/progress/dante/depth/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Wed May 10 15:38:41 2017 Axel Vandenabeele
** Last update Wed May 10 16:05:44 2017 Axel Vandenabeele
*/

#include "depth.h"

int	his_env(t_tools* tools, int lines, int cols)
{
	int	i;

	i = 0;
	if ((lines == tools->y && cols == tools->x) || (lines == 0 && cols == 0))
		return (0);
	if (tools->maze[lines + 1] && tools->maze[lines + 1][cols] == 'O')
		i++;
	if (tools->maze[lines][cols + 1] && tools->maze[lines][cols + 1] == 'O')
		i++;
	if (lines > 0)
		if (tools->maze[lines - 1] && tools->maze[lines - 1][cols] == 'O')
			i++;
	if (cols > 0)
		if (tools->maze[lines][cols - 1] && tools->maze[lines][cols - 1] == 'O')
			i++;
	if (i >= 2)
		return (0);
	return (1);
}

void 	replace_tab(t_tools* tools, char src, char dest)
{
	int	lines;
	int	cols;

	lines = 0;
	while (tools->maze[lines])
	{
		cols = 0;
		while (tools->maze[lines][cols])
		{
			if (tools->maze[lines][cols] == src)
				tools->maze[lines][cols] = dest;
			if (tools->maze[lines][cols] == 'O' &&
					his_env(tools, lines, cols) == 1)
				tools->maze[lines][cols] = '*';
			cols++;
		}
		lines++;
	}
}
