/*
** my_strlen.c for my_strlen in /home/axel/projects/progress/dante/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Wed Apr 26 13:47:36 2017 Axel Vandenabeele
** Last update Fri Apr 28 16:49:59 2017 Pierre Narcisi
*/

#include "generator.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
