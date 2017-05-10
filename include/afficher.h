/*
** afficher.h for afficher in /home/axel/projects/progress/dante/include/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Fri Apr 28 15:32:57 2017 Axel Vandenabeele
** Last update Tue May  2 16:31:33 2017 Axel Vandenabeele
*/

#ifndef AFFICHER_H
# define AFFICHER_H

#define MAZE_X 21
#define MAZE_Y 21
#define SCREEN_WIDTH MAZE_X * 10
#define SCREEN_HEIGHT MAZE_Y * 10
#define ABS(x) (((x) > 0) ? (x) : (-(x)))
#define MIN(x, y) ((x) > (y)) ? (y) : (x)

#include <SFML/Graphics.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef	struct		s_my_framebuffer
{
  sfUint8*	pixels;
  int				width;
  int				height;
}			            t_my_framebuffer;

typedef struct	s_size
{
	int	width;
	int	height;
	int color;
	int size;
	int	pass;
}								t_size;

/*
lib_printf
*/
int	my_printf(char *str, ...);

/*
get_next_line.c
*/
char	*get_next_line(const int fd);
char	*my_realloc(char *str, int i);

/*
make_render.c
*/
void 	make_render(t_my_framebuffer* fb, t_size* size);
t_size	*set_size();
void 	reset_size(t_size* size);

/*
my_affiche.c
*/
void  	my_draw_line(t_my_framebuffer* fb, sfVector2i from,
                    sfVector2i to, sfColor color);
void    my_put_pixel(t_my_framebuffer* fb, int x, int y, sfColor color);
void 	draw_square(t_my_framebuffer* fb, t_size* size, sfColor color);

#endif /*AFFICHER_H*/
