/*
** my_put_nbr_base.c for my_put_nbr_base in /home/axel/CPool_Day/CPool_Day03
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Wed Nov  9 13:29:17 2016 axel vandenabeele
** Last update Sun Nov 20 15:51:59 2016 axel vandenabeele
*/

#include <unistd.h>
#include "./include/my.h"

unsigned int		my_put_nbr_base_unsigned(unsigned int nb, char *base)
{
  unsigned int	i;

  i = 1;
  while ((nb / i) >= my_strlen(base))
    i = i * my_strlen(base);
  while (i > 0)
    {
      my_putchar(base[(nb / i) % my_strlen(base)]);
      i = i / my_strlen(base);
    }
  return (0);
}
