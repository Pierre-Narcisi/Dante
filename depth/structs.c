/*
** structs.c for structs in /home/axel/projects/progress/dante/solver1/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Mon May  1 15:39:47 2017 Axel Vandenabeele
** Last update Sun May 14 18:30:55 2017 Axel Vandenabeele
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
	int	lines = 0;
	int	i = 0;
	int	count;

	while (lines <= tools->y)
	{
		count = 0;
		if (!(tools->maze[lines] = malloc(sizeof(char) * (tools->x + 1))))
			exit (84);
		while (count < tools->x)
		{
			if (str[i] == '\n')
				i++;
			tools->maze[lines][count] = str[i];
			i++;
			count++;
		}
		tools->maze[lines][count] = '\0';
		lines++;
	}
	tools->maze[lines] = NULL;
}

t_pos	set_pos()
{
	t_pos	pos;

	pos.x = 0;
	pos.y = 0;
	return (pos);
}

void 	set_size(t_tools* tools, char *str)
{
	int	i;

	i = 0;
	while (str[tools->x] != '\n')
		tools->x++;
	while (str[i])
	{
		if (str[i] == '\n')
		tools->y++;
		i++;
	}
	if ((str[my_strlen(str) - 1] == '\n'))
		tools->y--;
}

t_tools	*set_tools(int	op, char **av)
{
	t_tools	*tools;
	char		*str;
	struct stat st;
	int			rd;

	if (!(tools = malloc(sizeof(t_tools))))
		exit (84);
	tools->x = 0;
	stat(av[1], &st);
	if (!(str = malloc(sizeof(char) * st.st_size + 1)))
		exit (84);
	if ((rd = read(op, str, st.st_size)) <= 0)
		exit (84);
	set_size(tools, str);
	if (!(tools->maze = malloc(sizeof(char *) * (tools->y + 1))))
		exit (84);
	fill_maze(tools, str);
	tools->x--;
	return (tools);
}
