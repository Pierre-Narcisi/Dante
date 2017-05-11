/*
** my_free.c for my_free in /home/axel/projects/progress/dante/depth/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Thu May 11 18:05:46 2017 Axel Vandenabeele
** Last update Thu May 11 18:07:49 2017 Axel Vandenabeele
*/

#include "depth.h"

void 	free_tab(t_tools* tools)
{
	int	i;

	i = 0;
	while (tools->maze[i])
	{
		free(tools->maze[i]);
		i++;
	}
}

void 	free_list(t_list* list)
{
	while (list->prev != NULL)
	{
		list = list->prev;
		free(list->next);
	}
	free(list);
}
