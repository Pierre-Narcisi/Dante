/*
** print_tab.c for print_tab in /home/axel/projects/progress/CPE_2016_corewar/corewar/asm/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu@epitech.eu>
**
** Started on  Sun Mar 26 00:15:38 2017 Axel Vandenabeele
** Last update Sun May 14 19:56:33 2017 Axel Vandenabeele
*/

#include "generator.h"

void 	print_tab(char **tab, t_tools *tools)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		write(0, tab[i], my_strlen(tab[i]));
		if (i < tools->y - 1)
			write(0, "\n", 1);
		i++;
	}
}
