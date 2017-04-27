/*
** my.h for my.h in /home/axel/projects/progress/dante/include/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Thu Apr 20 12:23:31 2017 Axel Vandenabeele
** Last update Thu Apr 27 17:39:57 2017 Pierre Narcisi
*/

#ifndef MY_H
# define MY_H

#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

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
	int 	p;
	int		visit;
	int		last;
}								t_tools;

typedef struct	s_list
{
	struct s_list *next;
	struct s_list *prev;
	t_pos	pos;
}								t_list;

/*
my_is.c
*/
int	my_isnum(char *str);

/*
print_tab.c
*/
void 	print_tab(char **tab);

/*
algo.c
*/
void algo(t_tools *tools);

/*
solver.c
*/

/*
generator.c
*/
void find_exit(t_tools *tools);
int check_wall(t_tools *tools, t_pos pos);
void 	generator(char **av, t_tools* tools);
void choose_pos(t_pos *pos, t_tools *tools);

/*
structs.c
*/
t_tools	*set_struct(char **av, int ac);

/*
my_strlen.c
*/
int	my_strlen(char *str);

#endif /*MY_H*/
