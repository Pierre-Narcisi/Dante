/*
** prep_line.c for prep_line in /home/axel/project/en cours/wolf3d/src/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu@epitech.eu>
**
** Started on  Tue Jan 10 19:28:21 2017 Axel Vandenabeele
** Last update Thu Jan 26 21:07:17 2017 Axel Vandenabeele
*/

#include "./include/my.h"

sfColor	init_wall(sfColor wall)
{
	wall.r = 123;
	wall.g = 122;
	wall.b = 110;
	wall.a = 255;
	return (wall);
}

sfColor	init_wall_bord(sfColor wall_bord)
{
	wall_bord.r = 90;
	wall_bord.g = 90;
	wall_bord.b = 90;
	wall_bord.a = 255;
	return (wall_bord);
}

void 					prep_line(t_my_framebuffer* fb, float ray, float distance)
{
	sfVector2i	from;
	sfVector2i	to;
	sfColor			wall;
	sfColor			wall_bord;
	int					count;

	count = 4;
	wall = init_wall(wall);
	wall_bord = init_wall_bord(wall_bord);
	from.x = ray;
	to.x = ray;
	from.y = (SCREEN_HEIGHT / 2) - (float)(SCREEN_HEIGHT / distance / 2);
	to.y = (SCREEN_HEIGHT / 2) + (float)(SCREEN_HEIGHT / distance / 2);
	my_draw_line(fb, from, to, wall);
	while (count >= 0)
	{
		my_put_pixel(fb, from.x, from.y - count, wall_bord);
		my_put_pixel(fb, from.x, to.y + count, wall_bord);
		count--;
	}
}
