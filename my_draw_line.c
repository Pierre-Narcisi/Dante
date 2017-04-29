/*
** my_draw_line.c for my_draw_line in /home/axel/project/en cours/wolf3d/src/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu@epitech.eu>
**
** Started on  Thu Dec 29 13:42:15 2016 Axel Vandenabeele
** Last update Tue Jan 24 17:34:23 2017 Axel Vandenabeele
*/

#include "./include/my.h"

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
