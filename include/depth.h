/*
** my.h for my.h in /home/axel/projects/progress/dante/include/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Thu Apr 20 12:23:31 2017 Axel Vandenabeele
** Last update Wed May  3 11:11:04 2017 Axel Vandenabeele
*/

#ifndef MY_H
# define MY_H

#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

typedef struct	s_pos
{
	int	x;
	int y;
}								t_pos;

typedef struct	s_tools
{
	char	**maze;
	int		x;
	int		y;
}								t_tools;

typedef struct	s_list
{
	struct s_list *next;
	struct s_list *prev;
	t_pos	pos;
}								t_list;

/*
printf
*/
int	my_printf(char *str, ...);

/*
get_next_line.c
*/
char	*get_next_line(const int fd);
char	*my_realloc(char *str, int i);

/*
print_tab.c
*/
void 	print_tab(char **tab);

/*
solver.c
*/
void 	solver(t_tools* tools);
void 	find_way(t_pos pos, t_list* list, t_tools* tools);
int	nbr_way(t_tools* tools, int y, int x);

/*
structs.c
*/
t_tools	*set_tools(int op, char **av);
t_pos		set_pos();

/*
my_strlen.c
*/
int	my_strlen(char *str);

/*
my_strcpy.c
*/
char	*my_strcpy(char *str);

#endif /*MY_H*/
