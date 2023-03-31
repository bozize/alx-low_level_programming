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
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;

	for (i = 0; i < n; i++)

		dest[destlen + i] = src[i];

	dest[destlen + i] = '\0';
	return (dest);
}



