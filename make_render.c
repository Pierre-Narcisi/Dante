/*
** make_render.c for make_render in /home/axel/projects/progress/dante/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Fri Apr 28 14:30:51 2017 Axel Vandenabeele
** Last update Sat Apr 29 16:43:34 2017 Axel Vandenabeele
*/

#include "afficher.h"

void 	make_render(t_my_framebuffer* fb)
{
	int	op;
	int	i;
	char	*str;
	int	height;
	int	width;
	int	size;
	int	size2;

	size = SCREEN_HEIGHT / MAZE_Y;
	size2 = SCREEN_WIDTH / MAZE_X;
	size = MIN(size, size2);
	height = 0;
	if ((op = open("./generator/maze.txt", O_RDONLY)) == -1)
		exit (84);
	while ((str = get_next_line((op))) != NULL)
	{
		i = 0;
		width = 0;
		while (str[i])
		{
			if (str[i] == 'X')
				draw_square(fb, width, height, size, sfBlack);
			else if (str[i] == '*')
				draw_square(fb, width, height, size, sfWhite);
				width += size;
			i++;
		}
		height += size;
	}
}
