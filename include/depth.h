/*
** my.h for my.h in /home/axel/projects/progress/dante/include/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Thu Apr 20 12:23:31 2017 Axel Vandenabeele
<<<<<<< HEAD
** Last update Wed May 10 17:34:17 2017 Axel Vandenabeele
=======
** Last update Thu May 11 14:35:16 2017 Pierre Narcisi
>>>>>>> 2c547e1e4d1c7147ed9f3168e04f7a2ab2fb2b9c
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

/*
my_strdup.c
*/
char	*my_strdup(char *src, char *dest);
/*
set_maze.c
*/
void 	replace_tab(t_tools* tools, char src, char dest);
int		his_env(t_tools* tools, int lines, int cols);

/*
my_strdup.c
*/
char	*my_strdup(char *src, char *dest);

/*
my_free.c
*/
void 	free_tab(t_tools* tools);
void 	free_list(t_list* list);

#endif /*MY_H*/
