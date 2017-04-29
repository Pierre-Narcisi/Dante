/*
** my_X.c for my_X in /home/axel/project/PSU_2016_my_printf
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Fri Nov 18 22:19:50 2016 axel vandenabeele
** Last update Sun Nov 20 15:44:01 2016 axel vandenabeele
*/

#include <stdarg.h>
#include "./include/my.h"

void	my_X(va_list var)
{
  int	c;

  c = va_arg(var, int);
  my_put_nbr_base_unsigned(c, "0123456789ABCDEF");
}
