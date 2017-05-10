/*
** make_render.c for make_render in /home/axel/projects/progress/dante/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu>
**
** Started on  Fri Apr 28 14:30:51 2017 Axel Vandenabeele
** Last update Wed May 10 16:51:02 2017 Axel Vandenabeele
*/

#include "afficher.h"

void 	reset_size(t_size* size)
{
	size->pass = 0;
	size-> height = 0;
	size->width = 0;
}

t_size	*set_size()
{
	int size2;
	t_size	*size;

	if (!(size = malloc(sizeof(char))))
		exit (84);
	size->size = SCREEN_HEIGHT / MAZE_Y;
	size2 = SCREEN_WIDTH / MAZE_X;
	size->size = MIN(size->size, size2);
	size->height = 0;
	size->pass = 0;
	return (size);
}

void 	make_render(t_my_framebuffer* fb, t_size* size)
{
	int	op;
	int	i;
	char	*str;

	if ((op = open("../generator/maze.txt", O_RDONLY)) == -1)
		exit (84);
	while ((str = get_next_line((op))) != NULL)
	{
		i = 0;
		size->width = 0;
		while (str[i])
		{
			if (str[i] == 'X')
				draw_square(fb, size, sfBlack);
			else if (str[i] == '*')
				draw_square(fb, size, sfWhite);
				size->width += size->size;
			i++;
			size->pass = 1;
		}
		size->height += size->size;
	}
}
