/*
** my_b.c for my_b in /home/axel/project/PSU_2016_my_printf
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Sat Nov 19 15:46:24 2016 axel vandenabeele
** Last update Sun Nov 20 15:47:16 2016 axel vandenabeele
*/

#include <stdarg.h>
#include "./include/my.h"

void	my_b(va_list var)
{
  int	c;

  c = va_arg(var, int);
  my_put_nbr_base_unsigned(c, "01");
}
