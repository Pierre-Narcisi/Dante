/*
** epur.c for dante in /home/byliarus/work/AI/dante/breadth/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Tue May  2 16:28:45 2017 Pierre Narcisi
** Last update Wed May  3 15:07:22 2017 Pierre Narcisi
*/

#include "astar.h"

void	epur_map(t_tools *tools)
{
  int	i;

  i = 0;
   while (tools->map[i])
     {
       if (tools->map[i] == '+')
	 tools->map[i] = '*';
       i++;
     }
}
