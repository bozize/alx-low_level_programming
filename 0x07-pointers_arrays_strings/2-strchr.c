#include "main.h"
/**
 * _strchr - this functions locates a character in a string
 * @s: string pointer
 * @l: character to be located
 *
 * Return: s
 */
char *_strchr(char *s, char l)
{
	for (; *s != '\0'; s++)
		if (*s == l)
			return (s);
}
