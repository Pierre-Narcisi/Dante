/*
** astar.h for dante in /home/byliarus/work/AI/dante/include/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Tue May  2 17:46:08 2017 Pierre Narcisi
** Last update Fri May 12 16:04:54 2017 Pierre Narcisi
*/

#ifndef _AST_H
# define _AST_H

#include <sys/mman.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct	s_pos
{
	int	x;
	int y;
}								t_pos;

typedef struct	s_list
{
	struct s_list *next;
	struct s_list *prev;
	int	pos;
  int poids;
}								t_list;

typedef struct s_tools
{
  char *map;
  int first;
  t_list *tail;
  int tail_size;
  int len;
  int x;
}              t_tools;

int line_len(char *str);
int algo(t_tools *tools);
void epur_map(t_tools *tools);
void remove_to_tail(t_list *list);
t_list *choose_node(t_tools *tools);
int parsing(char *str, t_tools *tools);
void add_to_tail(t_tools *tools, int i);
t_list *create_node(int pos, int poids, t_list *node);

#endif
