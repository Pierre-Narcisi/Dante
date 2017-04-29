/*
** my_c.c for my_c in /home/axel/project/PSU_2016_my_printf
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Wed Nov 16 16:52:56 2016 axel vandenabeele
** Last update Wed Nov 16 19:26:19 2016 axel vandenabeele
*/

#include <stdarg.h>
#include "./include/my.h"

void	my_c(va_list var)
{
  char	c;

  c = va_arg(var, int);
  my_putchar(c);
}
