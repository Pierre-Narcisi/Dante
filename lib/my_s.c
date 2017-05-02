/*
** my_s.c for my_s in /home/axel/project/PSU_2016_my_printf
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Wed Nov 16 17:28:56 2016 axel vandenabeele
** Last update Sat Nov 19 17:11:48 2016 axel vandenabeele
*/

#include <stddef.h>
#include <stdarg.h>
#include "./include/my.h"

void	my_s(va_list var)
{
  char	*str;

  str = va_arg(var, char*);
  if (str == NULL)
    my_putstr("(null)");
  else
    my_putstr(str);
}
