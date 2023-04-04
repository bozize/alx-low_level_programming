#include "main.h"
/**
 * _strchr - this functions locates a character in a string
 * @s: string pointer
 * @c: character to be located
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
		if (*s == c)
			return (s);
	if (*s == c)
		return (s);

	return (NULL);
}
