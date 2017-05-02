/*
** generator.h for dante in /home/byliarus/work/AI/dante/include/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Fri Apr 28 16:47:48 2017 Pierre Narcisi
** Last update Fri Apr 28 16:49:18 2017 Pierre Narcisi
*/

#ifndef GEN_H
# define GEN_H

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
void 	generator(t_tools* tools);
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
