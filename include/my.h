/*
** my.h for my.h in /home/axel/projects/progress/dante/include/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Thu Apr 20 12:23:31 2017 Axel Vandenabeele
** Last update Thu Apr 20 14:28:45 2017 Axel Vandenabeele
*/

#ifndef MY_H
# define MY_H

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct	s_tools
{
	char	**maze;
	int		x;
	int		y;
	int		visit;
	int		last;
}								t_tools;

/*
my_is.c
*/
int	my_isnum(char *str);
int	my_strlen(char *str);

/*
print_tab.c
*/
void 	print_tab(char **tab);

/*
algo.c
*/


#endif /*MY_H*/
