#include "main.h"
#include <stdlib.h>
/**
 * str_concat - this is a function that concatenates two strings
 * @s1: string to concatenate
 * @s2: string to conctenate
 *
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *join;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	join = malloc(sizeof(char) * (x + y + 1));

	if (join == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		join[x] = s1[x];
			x++;
	}
	while (s2[y] != '\0')
	{
		join[x] = s2[y];
		x++, y++;
	}
	join[x] = '\0';
	return (join);
}

