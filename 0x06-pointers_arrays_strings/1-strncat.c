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
	int len1;
	int len2;
	int i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; dest[i] != '\0'; i++)
		len1++;

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[len1 + i] = src[i];

	return (dest);
}



