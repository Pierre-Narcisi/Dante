/*
** handle_list.c for dante in /home/byliarus/work/AI/dante/astar/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Fri May 12 16:00:57 2017 Pierre Narcisi
** Last update Sun May 14 22:41:33 2017 Pierre Narcisi
*/

#include "astar.h"
# define abso(a) a >= 0 ? a : -a

t_list *choose_node(t_tools *tools)
{
	t_list *res;
  t_list *tmp;

  tmp = tools->tail;
	res = tools->tail;
	while (tools->tail != NULL)
		{
			if (tools->tail->poids <= res->poids)
					res = tools->tail;
			tools->tail = tools->tail->next;
		}
	tools->tail = tmp;
	return (res);
}

int calc_poids(t_tools *tools, int i)
{
	int y;
	int x2;
	int y2;

	y = tools->len / tools->x;
	y2 = i / tools->x;
	x2 = i % tools->x;
	y = abso(tools->x - x2) + abso(y - y2);
	return (y);
}

void add_to_tail(t_tools *tools, int i)
{
	t_list *l_new;
	int poids;

	poids = calc_poids(tools, i);
	while (tools->tail->next != NULL)
		tools->tail = tools->tail->next;
	l_new = create_node(i, poids, tools->tail);
	tools->tail->next = l_new;
	tools->map[i] = '+';
	tools->tail_size++;
	while (tools->tail->prev != NULL)
		tools->tail = tools->tail->prev;
}

void remove_to_tail(t_list *list)
{
	if (list->prev != NULL)
		list->prev->next = list->next;
	if (list->next != NULL)
		list->next->prev = list->prev;
}
