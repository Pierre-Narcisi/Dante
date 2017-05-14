/*
** epur.c for dante in /home/byliarus/work/AI/dante/breadth/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Tue May  2 16:28:45 2017 Pierre Narcisi
** Last update Tue May  2 16:30:54 2017 Pierre Narcisi
*/

 #include "breadth.h"

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
