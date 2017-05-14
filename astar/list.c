/*
** list.c for dante in /home/byliarus/work/AI/dante/astar/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Tue May  2 17:48:22 2017 Pierre Narcisi
** Last update Wed May  3 17:45:00 2017 Pierre Narcisi
*/

#include "astar.h"

t_list		*create_node(int pos, int poids, t_list *node)
{
  t_list	*list;

  if (!(list = malloc(sizeof(t_list))))
    return (NULL);
  list->pos = pos;
  list->poids = poids;
  list->prev = node;
  list->next = NULL;
  return (list);
}
