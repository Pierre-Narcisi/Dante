/*
** structs.c for structs in /home/axel/projects/progress/dante/solver1/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Mon May  1 15:39:47 2017 Axel Vandenabeele
** Last update Wed May  3 12:54:08 2017 Axel Vandenabeele
*/

#include "depth.h"

int	set_dir(char **maze, int dir)
{
	if (maze[0][1] == '*')
		dir = 2;
	else if (maze[1][0] == '*')
		dir = 3;
	return (dir);
}

void 	fill_maze(t_tools* tools, char *str)
{
	static int	lines = 0;

	if (lines == 0)
		tools->x = my_strlen(str) - 1;
	if (!(tools->maze[lines] = my_strcpy(str)))
		exit (84);
	lines++;
}

void 	malloc_maze(t_tools* tools)
{
	if (!(tools->maze = malloc(sizeof(char *) * (tools->y + 1))))
		exit (84);
}

t_pos	set_pos()
{
	t_pos	pos;

	pos.x = 0;
	pos.y = 0;
	return (pos);
}

t_tools	*set_tools(int	op, char **av)
{
	t_tools	*tools;
	char		*str;

	if (!(tools = malloc(sizeof(t_tools))))
		exit (84);
	tools->y = 0;
	while ((str = get_next_line((op))) != NULL)
		tools->y++;
	close(op);
	malloc_maze(tools);
	op = open(av[1], O_RDONLY);
	while ((str = get_next_line((op))) != NULL)
		fill_maze(tools, str);
	tools->maze[tools->y] = NULL;
	tools->y--;
	return (tools);
}
