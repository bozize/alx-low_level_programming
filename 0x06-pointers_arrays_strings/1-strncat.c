#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings with condition
 * @src:source string
 * @dest:destination string
 *
 * @n:condition
 *
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		len1++;
	for (i = 0; src[i] != '\0'; i++)
		len2++;

	for (i = 0; i < n; i++)

		dest[len1 + i] = src[i];

	return (dest);
}



