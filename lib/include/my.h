/*
** my.h for my.h in /home/axel/project/PSU_2016_my_printf
** 
** Made by axel vandenabeele
** Login   <axel@epitech.net>
** 
** Started on  Tue Nov 15 15:21:27 2016 axel vandenabeele
** Last update Sun Nov 20 16:42:23 2016 axel vandenabeele
*/

#include <stdarg.h>

#ifndef MY_H
# define MY_H

typedef struct	t_list
{
  char	verif;
  void	(*disp)(va_list var);
}	t_list;

int		my_printf(char *arr, ...);
void		my_unknow(va_list var);
void		my_s(va_list var);
void		my_S(va_list var);
void		my_dori(va_list var);
void		my_b(va_list var);
void		my_o(va_list var);
void		my_u(va_list var);
void		my_x(va_list var);
void		my_X(va_list var);
void		my_c(va_list var);
void		my_putchar(char c);
int		my_putstr(char *str);
int		my_putstr_S(char *str);
int		my_strlen(char *str);
int		my_put_nbr(int nb);
unsigned int	my_put_nbr_unsigned(unsigned nb);
unsigned int	my_put_nbr_base_unsigned(unsigned int nb, char *base);

#endif /*MY_H*/
