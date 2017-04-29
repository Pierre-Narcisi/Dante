/*
** my_afficher.c for my_afficher in /home/axel/projects/progress/dante/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Fri Apr 28 18:10:44 2017 Axel Vandenabeele
** Last update Sat Apr 29 12:04:52 2017 Axel Vandenabeele
*/

#include "afficher.h"

void    my_put_pixel(t_my_framebuffer* fb, int x, int y, sfColor color)
{
	if (x < fb->width && y < fb->height && x >= 0 && y >= 0)
	{
		fb->pixels[(fb->width * y + x) * 4] = color.r;
		fb->pixels[(fb->width * y + x) * 4 + 1] = color.g;
		fb->pixels[(fb->width * y + x) * 4 + 2] = color.b;
		fb->pixels[(fb->width * y + x) * 4 + 3] = color.a;
	}
}

void  	my_draw_line(t_my_framebuffer* fb, sfVector2i from,
                    sfVector2i to, sfColor color)
{
  int 	i;
	float len;
  float x;
  float y;

  if (ABS(to.x - from.x) >= ABS(to.y - from.y))
      len = ABS(to.x - from.x);
  else
      len = ABS(to.y - from.y);
  x = from.x + 0.5;
  y = from.y + 0.5;
  i = 1;
  while (i <= len)
  {
    my_put_pixel(fb, x, y, color);
    x = x + (to.x - from.x) / len;
    y = y + (to.y - from.y) / len;
    i++;
  }
	if (from.x == to.x && from.y == to.y)
		my_put_pixel(fb, to.x, to.y, color);
}

void 	draw_square(t_my_framebuffer* fb, int x, int y, int size, sfColor color)
{
	int	lines;
	int	cols;
	int	x_tmp;

	if (x < 5 && y < 5)
		color = sfGreen;
	if (x > MAZE_X * size - size * 2 && y > MAZE_Y * size - size * 2)
		color = sfRed;
	lines = 0;
	x_tmp = x;
	while (lines < size)
	{
		cols = 0;
		x = x_tmp;
		while (cols < size)
		{
			my_put_pixel(fb, x, y, color);
			x++;
			cols++;
		}
		y++;
		lines++;
	}
}
