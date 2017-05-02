/*
** my_unknow.c for my_unknow in /home/axel/project/PSU_2016_my_printf
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Thu Nov 17 09:05:20 2016 axel vandenabeele
** Last update Thu Nov 17 09:29:04 2016 axel vandenabeele
*/

#include <stdarg.h>
#include "./include/my.h"

void	my_unknow(va_list var)
{
  char	c;

  c = va_arg(var, int);
  my_putchar('%');
}
