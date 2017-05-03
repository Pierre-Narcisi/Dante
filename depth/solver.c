/*
** solver.c for solver in /home/axel/projects/progress/dante/solver1/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Mon May  1 15:41:51 2017 Axel Vandenabeele
** Last update Wed May  3 12:55:08 2017 Axel Vandenabeele
*/

#include "depth.h"

t_list *create_node(t_pos pos, t_list *node)
{
	t_list *list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->pos = pos;
	list->prev = node;
	if (node)
		list->prev->next = list;
	list->next = NULL;
	return (list);
}

int	nbr_way(t_tools* tools, int y, int x)
{
	int	nbr_way;

	nbr_way = 0;
	if (x < tools->x && tools->maze[y][x + 1] == '*')
		nbr_way++;
	if (y < tools->y && tools->maze[y + 1][x] == '*')
		nbr_way++;
	if (x > 0 && tools->maze[y][x - 1] == '*')
		nbr_way++;
	if (y > 0 && tools->maze[y - 1][x] == '*')
		nbr_way++;
	return (nbr_way);
}

t_pos	choose_pos(t_pos pos, t_tools* tools)
{
	if (pos.x < tools->x && tools->maze[pos.y][pos.x + 1] == '*')
	{
		tools->maze[pos.y][pos.x] = '+';
		pos.x++;
		tools->maze[pos.y][pos.x] = '+';
	}
	else if (pos.y < tools->y && tools->maze[pos.y + 1][pos.x] == '*')
	{
		tools->maze[pos.y][pos.x] = '+';
		pos.y++;
		tools->maze[pos.y][pos.x] = '+';
	}
	else if (pos.x > 0 && tools->maze[pos.y][pos.x - 1] == '*')
	{
		tools->maze[pos.y][pos.x] = '+';
		pos.x--;
		tools->maze[pos.y][pos.x] = '+';
	}
	else if (pos.y > 0 && tools->maze[pos.y - 1][pos.x] == '*')
	{
		tools->maze[pos.y][pos.x] = '+';
		pos.y--;
		tools->maze[pos.y][pos.x] = '+';
	}
	return (pos);
}

void 	find_way(t_pos pos, t_list* list, t_tools* tools)
{
	int	way;

	while (pos.x < tools->x || pos.y < tools->y)
	{
		if ((way = nbr_way(tools, pos.y, pos.x)) == 0)
		{
			while (list->prev != NULL && (way = nbr_way(tools, pos.y, pos.x)) == 0)
			{
				tools->maze[pos.y][pos.x] = '-';
				list = list->prev;
				pos = list->prev->pos;
				free(list->next);
			}
		}
		else
		{
			pos = choose_pos(pos, tools);
			list = create_node(pos, list);
		}
	}
}

void 	solver(t_tools* tools)
{
	t_pos	pos;
	t_list*	list;

	pos = set_pos();
	list = create_node(pos, NULL);
	find_way(pos, list, tools);
	print_tab(tools->maze);
}
