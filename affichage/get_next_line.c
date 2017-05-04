/*
** get_next_line.c for get_next_line in /home/axel/projects/progress/PSU_2016/tetris
**
** Made by Axel Vandenabeele
** Login   <axel.vandenabeele@epitech.eu@epitech.eu>
**
** Started on  Sun Jan 15 12:13:44 2017 Axel Vandenabeele
** Last update Fri Apr 28 16:00:23 2017 Axel Vandenabeele
*/

#include "afficher.h"
#include "get_next_line.h"

char		*my_realloc(char *str, int i)
{
	char	*str_temp;
	int		p;

	p = 0;
	if ((str_temp = malloc(sizeof(char) * (i + 2))) == NULL)
		return (NULL);
	while (str[p])
	{
		str_temp[p] = str[p];
		p++;
	}
	str_temp[p] = '\0';
	str_temp[p + 1] = '\0';
	return (str_temp);
}

char		*get_next_line(const int fd)
{
  int 	i;
  char	*str;
  char	buff[1];
  int		rd;

	i = 0;
	if ((rd = read(fd, buff, 1)) <= 0)
		return (NULL);
  if ((str = malloc(sizeof(char) * (READ_SIZE + 1))) == NULL)
		return (NULL);
  while (buff[0] != '\n' && rd >= 0)
  {
    str[i] = buff[0];
    i++;
		str[i] = '\0';
    if ((str = my_realloc(str, i)) == NULL)
			return (NULL);
    if ((rd = read(fd, buff, 1)) == 0)
			break;
  }
  str[i] = '\0';
	return (str);
}
