/*
** print_tab.c for print_tab in /home/axel/projects/progress/CPE_2016_corewar/corewar/asm/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu@epitech.eu>
**
** Started on  Sun Mar 26 00:15:38 2017 Axel Vandenabeele
** Last update Thu Apr 20 13:01:34 2017 Axel Vandenabeele
*/

#include "my.h"

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
