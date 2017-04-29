/*
** my_S.c for my_S in /home/axel/project/PSU_2016_my_printf
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Sun Nov 20 16:15:17 2016 axel vandenabeele
** Last update Sun Nov 20 16:47:51 2016 axel vandenabeele
*/

#include <stddef.h>
#include <stdarg.h>
#include "./include/my.h"

void	my_S(va_list var)
{
  char	*str;

  str = va_arg(var, char*);
  if (str == NULL)
    my_putstr("(null)");
  my_putstr_S(str);
}
