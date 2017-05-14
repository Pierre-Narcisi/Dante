/*
** algo.c for dante in /home/byliarus/work/AI/dante/breadth/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Fri Apr 28 17:27:26 2017 Pierre Narcisi
** Last update Sat May 13 00:36:11 2017 Pierre Narcisi
*/

#include "astar.h"

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
	int tmp;
	t_list *list;

	if (!(index = malloc (tools->len * sizeof(int))))
		return (84);
	tools->map[0] = '+';
	tools->first = 0;
	tmp = 0;
  if (!(tools->tail = malloc (sizeof(t_list))))
    return (84);
	tools->tail_size = 1;
	tools->tail = create_node(0, tools->len, NULL);
  while (tmp != tools->len - 1 && tools->tail_size > 0)
    {
			list = choose_node(tools);
			tmp = list->pos;
			check_wall(tools, tmp, index);
			remove_to_tail(list);
    }
	trace_path(tools, index);
	epur_map(tools);
	printf("%s\n", tools->map);
	free(index);
	free(tools->tail);
  return (0);
}
