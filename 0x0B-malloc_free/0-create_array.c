#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function thar returns a pointer toa character array
 * @c:  is the character that the array will be initialized with
 * @size:is the size of the array to be created
 *
 * Return: an array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	for (x = 0; x < size; x++)
	{
		if (array == NULL)
		{
			return (NULL);
		}
		array[x] = c;
	}
	return (array);
}
