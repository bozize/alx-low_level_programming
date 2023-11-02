#include "main.h"

/**
 * malloc_checked - checks memeory allocated
 * @b: numberof bytea
 * Return: 98 if fails
 */
void *malloc_checked(unsigned int b)
{
void *iffails;
iffails = malloc(b);
if (iffails != NULL)
{
return (iffails);
}
exit(98);
}

