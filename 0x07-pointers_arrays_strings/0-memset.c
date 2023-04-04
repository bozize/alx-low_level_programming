#include "main.h"
/**
 * _memset - function that sets the first n byte of the
 * block of memory pointed to by s to the value of
 * b one at a time
 * @s: pointer
 * @b: value to set each byte to
 * @n: the number of bytes to set
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
