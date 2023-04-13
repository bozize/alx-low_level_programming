#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _memcpy - function that copies bytes from one meory
 * area to another
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}

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

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: destination string
 * @s2: source string
 * @n: maximum number of characters to be appended
 *
 * Return: a pointer that point to a newly allocated space in memory,
 * If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len2, len1;
	char *pr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len2 = _strlen(s2);
	len1 = _strlen(s1);

	if (n > len2)
	{
		n = len2;
	}

	pr = malloc((len1 + n + 1) * sizeof(char));

	if (pr == NULL)
	{
		return (NULL);
	}
	else
	{
		_memcpy(pr, s1, len1);
		_memcpy(pr + len1, s2, n);
	}
	return (pr);
}
