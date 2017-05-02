/*
** my_printf.c for my_printf in /home/axel/project/PSU_2016_my_printf
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Tue Nov 15 16:46:03 2016 axel vandenabeele
** Last update Sun Nov 20 16:15:06 2016 axel vandenabeele
*/

#include <stdarg.h>
#include "./include/my.h"

t_list	table[] =
  {
    {'b', &my_b},
    {'c', &my_c},
    {'d', &my_dori},
    {'i', &my_dori},
    {'o', &my_o},
    {'s', &my_s},
    {'S', &my_S},
    {'u', &my_u},
    {'x', &my_x},
    {'X', &my_X},
    {'%', &my_unknow}
  };

int		my_printf(char *str, ...)
{
  va_list	var;
  int		i;
  int		n;

  i = 0;
  n = 0;
  va_start(var, *str);
  while (str[i] != '\0')
    {
      if (str[i] == '%')
	{
	  i++;
	  n = 0;
	  while (table[n].verif != str[i])
	    n++;
	  table[n].disp(var);
	}
      else
	my_putchar(str[i]);
      i++;
    }
  va_end(var);
  return (0);
}
