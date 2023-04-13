#include "main.h"
/**
 * malloc_checked - function that that dynamically allocates a block of memory
 *
 * @b: parameter to allocate memory for
 *
 * Return: pointer to the allocated memory
 * if it fails it should ause normal termination
 */
void *malloc_checked(unsigned int b)
{
	void *pr = malloc(b);

	if (pr == NULL)
	{
		exit(98);
	}

	return (pr);
}
