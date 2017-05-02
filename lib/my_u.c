/*
** my_u.c for my_u in /home/axel/project/PSU_2016_my_printf
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Sat Nov 19 11:01:16 2016 axel vandenabeele
** Last update Sat Nov 19 15:15:39 2016 axel vandenabeele
*/

#include <stdarg.h>
#include "./include/my.h"

void	my_u(va_list var)
{
  int	c;

  c = va_arg(var, int);
  my_put_nbr_unsigned(c);
}
