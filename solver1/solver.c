/*
** solver.c for solver in /home/axel/projects/progress/dante/solver1/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Mon May  1 15:41:51 2017 Axel Vandenabeele
** Last update Tue May  2 16:24:19 2017 Axel Vandenabeele
*/

#include "solver.h"

t_list *create_node(t_pos* pos, t_list *node)
{
	t_list *list;

	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->pos = pos;
	list->prev = node;
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
	if (x > 1 && tools->maze[y][x - 1] == '*')
		nbr_way++;
	if (y > 1 && tools->maze[y - 1][x] == '*')
		nbr_way++;
	return (nbr_way);
}

void 	choose_pos(t_pos* pos, t_tools* tools)
{
	if (pos->x < tools->x && tools->maze[pos->y][pos->x + 1] == '*')
	{
		tools->maze[pos->y][pos->x] = '+';
		pos->x++;
	}
	else if (pos->y < tools->y && tools->maze[pos->y + 1][pos->x] == '*')
	{
		tools->maze[pos->y][pos->x] = '+';
		pos->y++;
	}
	else if (pos->x > 0 && tools->maze[pos->y][pos->x - 1] == '*')
	{
		tools->maze[pos->y][pos->x] = '+';
		pos->x--;
	}
	else if (pos->y > 0 && tools->maze[pos->y - 1][pos->x] == '*')
	{
		tools->maze[pos->y][pos->x] = '+';
		pos->y--;
	}
}

void 	find_way(t_pos* pos, t_list* list, t_tools* tools)
{
	int	way;
	int	bol;

	bol = 0;
	while (pos->x < tools->x || pos->y < tools->y || bol == 0)
	{
		if ((way = nbr_way(tools, pos->y, pos->x)) == 0 && bol == 1)
		{
			my_printf("%i -- %i\n", list->pos->x, list->pos->y);
			pos = list->pos;
			list = list->prev;
			free(list->next);
		}
		else
		{
			list = list->next;
			create_node(pos, list);
			choose_pos(pos, tools);
		}
		print_tab(tools->maze);
		my_printf("\n");
		bol = 1;
	}
}

/*void 	right_hand(t_tools* tools, int dir)
{
	while (pos->x != tools->x && pos->y != tools->y)
	{
		if (x != tools->x)
		while (dir == 0 && maze[pos->y][pos->x + 1] != '*' && pos->y > 0)
			pos->y--;
		pos->x++;
		dir = 1;
		if (dir == 3)
	}
}*/

void 	solver(t_tools* tools)
{
	t_pos*	pos;
	//int			dir;
	t_list*	list;

	pos = set_pos();
	//dir = set_dir(tools->maze, dir);
	list = create_node(pos, NULL);
	find_way(pos, list, tools);
	//while (list->prev != NULL)
	//{
		//printf("slt\n");
		//tools->maze[list->pos->y][list->pos->x] = 'O';
	//}
	//print_tab(tools->maze);
}
