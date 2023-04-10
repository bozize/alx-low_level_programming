#include "main.h"
/**
 * *_strchr - this is a function that locates a character in a string
 *
 * @s: source string parameter
 *
 * @c: located character
 *
 * Return: a pointer to the first occurence or null
 */
char *_strchr(char *s, char c)
{
	int x = 0, j;

	while (s[x])
	{
		x++;
	}

	for (j = 0; j <= x; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}
