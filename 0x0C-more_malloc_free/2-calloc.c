#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory using malloc
 * @nmemb: memory blocks
 * @size:memory sblock size
 * Return: pointer tomemory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr_mem;
unsigned int len, i;
len = nmemb * size;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
arr_mem = malloc(len);

if (arr_mem == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
*((char *)arr_mem + i) = 0;
}
return (arr_mem);
}
