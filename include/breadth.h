/*
** breadth.h for dante in /home/byliarus/work/AI/dante/include/
**
** Made by Pierre Narcisi
** Login   <pierre.nacisi@epitech.eu>
**
** Started on  Fri Apr 28 17:03:33 2017 Pierre Narcisi
** Last update Tue May  2 16:31:31 2017 Pierre Narcisi
*/

#ifndef _BREA_H
# define _BREA_H

#include <sys/mman.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct s_tools
{
  char *map;
  int first;
  int *tail;
  int tail_size;
  int len;
  int x;
}              t_tools;

int line_len(char *str);
int algo(t_tools *tools);
void epur_map(t_tools *tools);
int parsing(char *str, t_tools *tools);

#endif
