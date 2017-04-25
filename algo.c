/*
** algo.c for algo in /home/axel/projects/progress/dante/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Thu Apr 20 14:28:04 2017 Axel Vandenabeele
** Last update Tue Apr 25 17:57:01 2017 Pierre Narcisi
*/

#include "my.h"
#include <time.h>

int check_wall(t_tools *tools, t_pos pos)
{
	if (pos.x + 2 <= tools->x)
		if (tools->maze[pos.y][pos.x + 2] == 'X')
			return (0);
	if (pos.x - 2 > 0)
		if (tools->maze[pos.y][pos.x - 2] == 'X')
			return (2);
	if (pos.y + 2 < tools->y)
		if (tools->maze[pos.y + 2][pos.x] == 'X')
			return (3);
	if (pos.y - 2 > tools->x)
		if (tools->maze[pos.y - 2][pos.x] == 'X')
			return (1);
	return (-1);
}

t_list *create_node(t_pos pos, t_list *node)
{
	t_list *list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->pos = pos;
	list->prev = node;
	list->next = NULL;
	return (list);
}

t_pos choose_pos(t_pos pos, t_tools *tools)
{
	int dir;
	int bol;

	bol = 0;
	while (bol == 0)
		{
			dir = rand() % 4;
			printf("%d\n", dir);
			if (dir == 0)
				{
					if (pos.x + 2 < tools->x && tools->maze[pos.y][pos.x + 2] == 'X')
							{
								pos.x += 2;
								bol = 1;
							}
				}
			else if (dir == 1)
				{
					if (pos.x - 2 >= 0 && tools->maze[pos.y][pos.x - 2] == 'X')
							{
								pos.x -= 2;
								bol = 1;
							}
				}
			else if (dir == 2)
				{
					if (pos.y + 2 < tools->y && tools->maze[pos.y + 2][pos.x] == 'X')
							{
								pos.y += 2;
								bol = 1;
							}
				}
			else if (dir == 3)
				{
					if (pos.y - 2 >= 0 && tools->maze[pos.y - 2][pos.x] == 'X')
							{
								pos.y -= 2;
								bol = 1;
							}
				}
	}
	return (pos);
}

void generate(t_pos pos, t_tools *tools, t_list *list)
{
	int bol;
	t_pos tmp;

	tools->maze[0][0] = '*';
	srand(time(NULL));
	bol = 0;
	while (list->prev != NULL || bol == 0)
		{
			if (check_wall(tools, pos) != -1)
				{
					tmp = list->pos;
					pos = choose_pos(pos, tools);
					list->next = create_node(pos, list);
					list = list->next;
					tools->maze[list->pos.y][list->pos.x] = '*';
					tools->maze[list->pos.y + ((tmp.y - pos.y) / 2)][list->pos.x + ((tmp.x - pos.x) / 2)] = '*';
				}
			else
				{
					list = list->prev;
					pos = list->pos;
					free (list->next);
				}
			bol = 1;
		}
}

void 	algo(t_tools *tools)
{
	t_pos pos;
	t_list *list;

	pos.x = 0;
	pos.y = 0;
	list = create_node(pos, NULL);
	generate(pos, tools, list);
}
