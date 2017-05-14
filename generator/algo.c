/*
** algo.c for algo in /home/axel/projects/progress/dante/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Thu Apr 20 14:28:04 2017 Axel Vandenabeele
** Last update Sun May 14 22:36:27 2017 Pierre Narcisi
*/

#include "generator.h"
#include <time.h>

t_list		*create_node(t_pos pos, t_list *node)
{
  t_list	*list;

  if (!(list = malloc(sizeof(t_list))))
    return (NULL);
  list->pos = pos;
  list->prev = node;
  list->next = NULL;
  return (list);
}

void	generate(t_pos pos, t_tools *tools, t_list *list)
{
  int	bol;
  t_pos	tmp;

  tools->maze[0][0] = '*';
  bol = 0;
  while (list->prev != NULL || bol == 0)
    {
      if (check_wall(tools, pos) != -1)
	{
	  tmp = list->pos;
	  choose_pos(&pos, tools);
	  list->next = create_node(pos, list);
	  list = list->next;
	  tools->maze[list->pos.y][list->pos.x] = '*';
	  tools->maze[list->pos.y + ((tmp.y - pos.y) / 2)]
	    [list->pos.x + ((tmp.x - pos.x) / 2)] = '*';
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

void	make_unperfect(t_tools *tools)
{
  int	i;
  int	j;

  i = 0;
  while (tools->maze[i])
    {
      j = 0;
      while (tools->maze[i][j])
	{
	  if (tools->maze[i][j] == 'X' && rand() % 100 < 10)
	    tools->maze[i][j] = '*';
	  j++;
	}
      i++;
    }
}

void		algo(t_tools *tools)
{
  t_pos		pos;
  t_list	*list;

  srand(time(NULL));
  pos.x = 0;
  pos.y = 0;
  list = create_node(pos, NULL);
  generate(pos, tools, list);
  find_exit(tools);
  if (tools->p != 1)
    make_unperfect(tools);
  print_tab(tools->maze, tools);
}
