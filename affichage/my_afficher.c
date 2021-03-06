/*
** my_afficher.c for my_afficher in /home/axel/projects/progress/dante/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Fri Apr 28 18:10:44 2017 Axel Vandenabeele
** Last update Wed May 10 16:53:34 2017 Axel Vandenabeele
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

void 	draw_square(t_my_framebuffer* fb, t_size* size, sfColor color)
{
	int	lines;
	int	cols;
	int	x_tmp;
	int	y_tmp;

	if (size->pass == 0)
		color = sfGreen;
	lines = 0;
	y_tmp = size->width;
	x_tmp = size->height;
	while (lines < size->size)
	{
		cols = 0;
		size->height = x_tmp;
		while (cols < size->size)
		{
			my_put_pixel(fb, size->height, size->width, color);
			size->height++;
			cols++;
		}
		size->width++;
		lines++;
	}
	size->height = x_tmp;
	size->width = y_tmp;
}
