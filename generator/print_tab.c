/*
** print_tab.c for print_tab in /home/axel/projects/progress/CPE_2016_corewar/corewar/asm/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu@epitech.eu>
**
** Started on  Sun Mar 26 00:15:38 2017 Axel Vandenabeele
** Last update Sat May 13 19:19:00 2017 Pierre Narcisi
*/

#include "generator.h"

void 	print_tab(char **tab, t_tools *tools)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		printf("%s", tab[i]);
		if (i < tools->y - 1)
			printf("\n");
		i++;
	}
}
