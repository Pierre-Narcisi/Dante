/*
** algo.c for dante in /home/byliarus/work/AI/dante/breadth/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Fri Apr 28 17:27:26 2017 Pierre Narcisi
** Last update Wed May  3 17:49:06 2017 Pierre Narcisi
*/

#include "astar.h"

void add_to_tail(t_tools *tools, int i)
{
	t_list *l_new;
	int poids;

	poids = tools->len - (i / tools->x + i % tools->x);
	while (tools->tail->next != NULL && tools->tail->poids < poids)
		tools->tail = tools->tail->next;
	if (tools->tail->prev != NULL)
	{
		l_new = create_node(i, poids,	tools->tail->prev);
		tools->tail->prev->next = l_new;
	}
	else
		l_new = create_node(i, poids,	NULL);
	l_new->next = tools->tail;
	tools->tail->prev = l_new;
	tools->map[i] = '+';
	tools->tail_size++;
	while (tools->tail->prev != NULL)
		tools->tail = tools->tail->prev;
}

void remove_to_tail(t_tools *tools)
{
	t_list *tmp;

	if (tools->tail->next != NULL)
	{
		tmp = tools->tail;
		tools->tail = tools->tail->next;
		tools->tail->prev = NULL;
		free(tmp);
	}
	tools->tail_size--;
}

void check_wall(t_tools *tools, int i, int *index)
{
	if (i + 1 < tools->len && tools->map[i + 1] == '*')
		{
			index[i + 1] = i;
			add_to_tail(tools, i + 1);
		}
	if (i - 1 >= 0 && tools->map[i - 1] == '*')
		{
			index[i - 1] = i;
			add_to_tail(tools, i - 1);
		}
	if (i + tools->x < tools->len && tools->map[i + tools->x] == '*')
		{
			index[i + tools->x] = i;
			add_to_tail(tools, i + tools->x);
		}
	if (i - tools->x >= 0 && tools->map[i - tools->x] == '*')
		{
			index[i - tools->x] = i;
			add_to_tail(tools, i - tools->x);
		}
}

void trace_path(t_tools *tools, int *index)
{
	int i;

	tools->map[tools->len - 1] = 'o';
	i = tools->len - 1;
	while (i != 0)
	{
		i = index[i];
		tools->map[i] = 'o';
	}
}

int algo(t_tools *tools)
{
	int *index;

	if (!(index = malloc (tools->len * sizeof(int))))
		return (84);
	tools->map[0] = '+';
	tools->first = 0;
  if (!(tools->tail = malloc (sizeof(t_list))))
    return (84);
	tools->tail_size = 1;
	tools->tail = create_node(0, tools->len, NULL);
  while (tools->tail->pos != tools->len - 1 && tools->tail_size > 0)
    {
			usleep(40000);
			printf("%s\n%d\n", tools->map, tools->tail_size);
			check_wall(tools, tools->tail->pos, index);
			remove_to_tail(tools);
    }
	trace_path(tools, index);
	epur_map(tools);
	printf("%s\n", tools->map);
	free(index);
	free(tools->tail);
  return (0);
}
