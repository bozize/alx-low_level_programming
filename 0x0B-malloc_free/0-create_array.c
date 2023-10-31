#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _create_array - creates array of characters
 *
 * @c:character
 * @size: un assigned int
 *
 * Return:null or pointer to the array
 */
char *_create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *myarray = (char *)malloc(size * sizeof(char))
		if (myarray == NULL)
		{
			return (NULL);
		}
	for (unsigned int i = 0; i < size; i++)
	{
		myarray[i] = c;
	}
	return (myarray);
}
