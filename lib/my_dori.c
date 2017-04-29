/*
** my_d.c for my_d in /home/axel/project/PSU_2016_my_printf
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Wed Nov 16 17:18:23 2016 axel vandenabeele
** Last update Thu Nov 17 11:30:11 2016 axel vandenabeele
*/

#include <stdarg.h>
#include "./include/my.h"

void	my_dori(va_list var)
{
  int	d;

  d = va_arg(var, int);
  my_put_nbr(d);
}
