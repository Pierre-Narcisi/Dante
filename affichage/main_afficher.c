/*
** main_afficher.c for main_afficher in /home/axel/project/en cours/wolf3d/src/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu@epitech.eu>
**
** Started on  Wed Dec 28 01:14:23 2016 Axel Vandenabeele
** Last update Thu May  4 10:59:08 2017 Axel Vandenabeele
*/

#include "afficher.h"

sfRenderWindow*		create_window(char *wd, int width, int height)
{
  sfRenderWindow*	window;
  sfVideoMode			mode;

  mode.width = width;
  mode.height = height;
  mode.bitsPerPixel = 32;
  window = sfRenderWindow_create(mode, wd, sfResize | sfClose, NULL);
  if (window == NULL)
    return (NULL);
  return (window);
}

t_my_framebuffer		*my_framebuffer_create(int width, int height)
{
  int								i;
  sfUint8						*pixels;
  t_my_framebuffer	*buffer;

  if (!(buffer = malloc(sizeof(t_my_framebuffer))))
    return (NULL);
  if (!(pixels = malloc(width * height * 4 * sizeof(*pixels))))
    {
      free(buffer);
      return (NULL);
    }
  buffer->pixels = pixels;
  buffer->width = width;
  buffer->height = height;
  i = 0;
  while (i < width * height * 4)
    {
      pixels[i] = 0;
      i++;
    }
  return (buffer);
}

void  		main_while(t_my_framebuffer* fb, sfTexture* texture,
                    sfSprite* sprite, sfRenderWindow* window)
{
	sfEvent	event;

	while (sfRenderWindow_pollEvent(window, &event))
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(window);
	sfRenderWindow_clear(window, sfBlack);
	sfTexture_updateFromPixels(texture, fb->pixels, fb->width, fb->height, 0, 0);
  sfRenderWindow_drawSprite(window, sprite, NULL);
  sfRenderWindow_display(window);
}

int									main()
{
	sfRenderWindow*		window;
  sfTexture*				texture;
  sfSprite*					sprite;
  t_my_framebuffer*	fb;
	t_size*	size;

	size = set_size();
  window = create_window("Generator", SCREEN_WIDTH, SCREEN_HEIGHT);
  sprite = sfSprite_create();
  texture = sfTexture_create(SCREEN_WIDTH, SCREEN_HEIGHT);
  fb = my_framebuffer_create(SCREEN_WIDTH, SCREEN_HEIGHT);
  sfSprite_setTexture(sprite, texture, sfTrue);
  while (sfRenderWindow_isOpen(window))
  	{
			main_while(fb, texture, sprite, window);
			make_render(fb, size);
			size->width -= size->size;
			size->height -= size->size;
			draw_square(fb, size, sfRed);
			reset_size(size);
			usleep(50000);
  	}
  sfRenderWindow_destroy(window);
  return (0);
}
