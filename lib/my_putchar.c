/*
** my_putchar.c for my_putchar in /home/axel/project/PSU_2016_my_printf
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Wed Nov 16 18:00:26 2016 axel vandenabeele
** Last update Thu Nov 17 09:00:17 2016 axel vandenabeele
*/

#include <unistd.h>
#include "./include/my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
