/*
** my_x.c for my_x in /home/axel/project/PSU_2016_my_printf
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Fri Nov 18 21:55:38 2016 axel vandenabeele
** Last update Sun Nov 20 15:43:47 2016 axel vandenabeele
*/

#include <stdarg.h>
#include "./include/my.h"

void	my_x(va_list var)
{
  int	c;

  c = va_arg(var, int);
  my_put_nbr_base_unsigned(c, "0123456789abcdef");
}
