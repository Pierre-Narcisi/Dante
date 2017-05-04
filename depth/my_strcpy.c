/*
** my_strcpy.c for my_strcpy in /home/axel/projects/progress/PSU_2016_minishell2/
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu@epitech.eu>
**
** Started on  Mon Mar 20 22:18:32 2017 Axel Vandenabeele
** Last update Wed May  3 12:53:43 2017 Axel Vandenabeele
*/

#include "depth.h"

char	*my_strcpy_range(char *str, int strt, int end)
{
	char	*c_str;
	int	i;

	i = 0;
	if ((c_str = malloc(sizeof(char) * (end - strt + 1))) == NULL)
		return (NULL);
	while (strt < end && str[strt])
		{
			c_str[i] = str[strt];
			i++;
			strt++;
		}
	c_str[i] = '\0';
	return (c_str);
}

char	*my_strncpy(char *str, int nbr)
{
	int	i;
	char	*c_str;

	i = 0;
	if ((c_str = malloc(sizeof(char) * my_strlen(str) + 1)) == NULL)
		return (NULL);
	while (str[nbr])
		{
			c_str[i] = str[nbr];
			i++;
			nbr++;
		}
	c_str[i] = '\0';
	return (c_str);
}

char	*my_strcpy(char *str)
{
	int	i;
	char	*c_str;

	i = 0;
	if ((c_str = malloc(sizeof(char) * my_strlen(str) + 1)) == NULL)
		return (NULL);
	while (str[i])
		{
			c_str[i] = str[i];
			i++;
		}
	c_str[i] = '\0';
	return (c_str);
}
