/*
** my_putstr.c for my_ptstr in /home/axel/CPool_Day04
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Thu Oct  6 16:44:24 2016 axel vandenabeele
** Last update Sun Nov 20 16:34:16 2016 axel vandenabeele
*/

#include "./include/my.h"

int	my_putstr(char *str)
{
  int	n;

  n = 0;
  while (str[n] != '\0')
    {
      my_putchar(str[n]);
      n = n + 1;
    }
  return (n);
}
