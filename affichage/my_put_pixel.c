/*
** my_put_pixel.c for my_put_pixel in /home/axel/project/en cours/wolf3d/src/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu@epitech.eu>
**
** Started on  Wed Dec 28 01:06:36 2016 Axel Vandenabeele
** Last update Thu Jan 12 10:56:36 2017 Axel Vandenabeele
*/

#include "./include/my.h"

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
