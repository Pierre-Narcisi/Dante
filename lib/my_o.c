/*
** my_o.c for my_o in /home/axel/project/PSU_2016_my_printf
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Sat Nov 19 11:06:40 2016 axel vandenabeele
** Last update Sun Nov 20 15:43:33 2016 axel vandenabeele
*/

#include <stdarg.h>
#include "./include/my.h"

void	my_o(va_list var)
{
  int	c;

  c = va_arg(var, int);
  my_put_nbr_base_unsigned(c, "01234567");
}
