/*
** print_tab.c for print_tab in /home/axel/projects/progress/CPE_2016_corewar/corewar/asm/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu@epitech.eu>
**
** Started on  Sun Mar 26 00:15:38 2017 Axel Vandenabeele
** Last update Fri Apr 28 16:50:06 2017 Pierre Narcisi
*/

#include "generator.h"

void 	print_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
