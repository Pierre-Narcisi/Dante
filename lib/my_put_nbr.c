/*
** my_put_nbr.c for my_put_nbr in /home/axel/CPool_Day/CPool_Day03
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Mon Nov  7 16:27:28 2016 axel vandenabeele
** Last update Thu Nov 17 11:22:30 2016 axel vandenabeele
*/

#include <unistd.h>
#include "./include/my.h"

int	my_put_nbr(int nb)
{
  int	i;

  i = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  while ((nb / i) >= 10)
  i = i * 10;
  while (i > 0)
    {
      my_putchar((nb / i) % 10 + '0');
      i = i / 10;
    }
  return (0);
}
