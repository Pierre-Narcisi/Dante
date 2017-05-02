/*
** my_putstr.c for my_ptstr in /home/axel/CPool_Day04
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Thu Oct  6 16:44:24 2016 axel vandenabeele
** Last update Sun Nov 20 20:28:15 2016 axel vandenabeele
*/

#include "./include/my.h"

int	my_putstr_S(char *str)
{
  int	n;

  n = 0;
  while (str[n] != '\0')
    {
      if (str[n] < 32 || str[n] >= 127)
	{
	  my_putchar('\\');
	  my_put_nbr_base_unsigned(str[n], "01234567");
	}
      my_putchar(str[n]);
      n = n + 1;
     }
  return (n);
}
