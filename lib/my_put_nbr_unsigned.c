/*
** my_put_nbr.c for my_put_nbr in /home/axel/CPool_Day/CPool_Day03
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Mon Nov  7 16:27:28 2016 axel vandenabeele
** Last update Sat Nov 19 16:45:55 2016 axel vandenabeele
*/

#include "./include/my.h"

unsigned int	my_put_nbr_unsigned(unsigned int nb)
{
  unsigned int	i;

  i = 1;
  while ((nb / i) >= 10)
    i = i * 10;
  while (i > 0)
    {
      my_putchar((nb / i) % 10 + '0');
      i = i / 10;
    }
  return (0);
}
