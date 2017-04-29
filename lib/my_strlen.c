/*
** my_strlen.c for my_strlen in /home/axel/CPool_Day04
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Thu Oct  6 20:35:38 2016 axel vandenabeele
** Last update Sun Nov 20 16:49:40 2016 axel vandenabeele
*/

#include "./include/my.h"

int	my_strlen(char *str)
{
  int	n;

  n = 0;
  while (str[n] != '\0')
      n = n + 1;
  return (n);
}
