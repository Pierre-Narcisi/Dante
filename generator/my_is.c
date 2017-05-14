/*
** my_is.c for my_is in /home/axel/projects/progress/PSU_2016_minishell2/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu@epitech.eu>
**
** Started on  Wed Apr  5 21:37:32 2017 Axel Vandenabeele
** Last update Fri Apr 28 16:49:49 2017 Pierre Narcisi
*/

#include "generator.h"

int	my_isnum(char *str)
{
  int	i;
  int	count;

  i = 0;
  while (str[i])
    {
      if (str[i] >= '0' && str[i] <= '9')
	count++;
      if ((count = my_strlen(str)))
	return (0);
      i++;
    }
  return (1);
}
