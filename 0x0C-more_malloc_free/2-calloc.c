#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function used to allocate a block of memory
 * @nmemb: elements
 * @size: bytes
 * Return: pointer or void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pr = malloc(nmemb * size);
	if (pr == NULL)
		return (NULL);
	for (x = 0; x < nmemb * size; x++)
		pr[x] = 0;

	return (pr);
}

