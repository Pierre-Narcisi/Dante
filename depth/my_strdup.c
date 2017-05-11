/*
** my_strdup.c for my_strdup in /home/axel/projects/progress/dante/depth/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Wed May 10 17:31:45 2017 Axel Vandenabeele
** Last update Wed May 10 17:33:22 2017 Axel Vandenabeele
*/

#include "depth.h"

char	*my_strdup(char *src, char *dest)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
