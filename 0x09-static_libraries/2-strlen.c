#include "main.h"
/**
 * _strlen - a function that calculates the length
 * of a string
 *
 * @s: string
 *
 * Return: string lenght
 */
int _strlen(char *s)
{
	int L = 0;

	while (*s != '\0')
	{
		L++;
		s++;
	}

	return (L);
}
