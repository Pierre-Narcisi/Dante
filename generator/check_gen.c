/*
** check_gen.c for dante in /home/byliarus/work/AI/dante/generator/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Thu Apr 27 17:12:47 2017 Pierre Narcisi
** Last update Thu Apr 27 18:02:59 2017 Pierre Narcisi
*/

#include "my.h"

void find_exit(t_tools *tools)
{
	t_pos pos;

	pos.x = tools->x - 1;
	pos.y = tools->y - 1;
	if (tools->maze[pos.y][pos.x] != '*')
		{
			tools->maze[pos.y][pos.x] = '*';
			tools->maze[pos.y][pos.x - 1] = '*';
		}
}

int check_wall(t_tools *tools, t_pos pos)
{
	if (pos.x + 2 < tools->x && tools->maze[pos.y][pos.x + 2] == 'X')
			return (0);
	if (pos.x - 2 >= 0 && tools->maze[pos.y][pos.x - 2] == 'X')
			return (2);
	if (pos.y + 2 < tools->y && tools->maze[pos.y + 2][pos.x] == 'X')
			return (3);
	if (pos.y - 2 >= 0 && tools->maze[pos.y - 2][pos.x] == 'X')
			return (1);
	return (-1);
}

int change_pos(t_pos *pos, int x, int y)
{
	pos->x += x;
	pos->y += y;
	return (1);
}

void choose_pos(t_pos *pos, t_tools *tools)
{
	int dir;
	int bol;

	bol = 0;
	while (bol == 0)
		{
			dir = rand() % 4;
			if (dir == 0 && pos->x + 2 < tools->x &&
				 tools->maze[pos->y][pos->x + 2] == 'X')
								bol = change_pos(pos, 2, 0);
			else if (dir == 1 && pos->x - 2 >= 0 &&
				 tools->maze[pos->y][pos->x - 2] == 'X')
								bol = change_pos(pos, -2, 0);
			else if (dir == 2 && pos->y + 2 < tools->y &&
				 tools->maze[pos->y + 2][pos->x] == 'X')
								bol = change_pos(pos, 0, 2);
			else if (dir == 3 && pos->y - 2 >= 0 &&
				 tools->maze[pos->y - 2][pos->x] == 'X')
								bol = change_pos(pos, 0, -2);
			}
}
