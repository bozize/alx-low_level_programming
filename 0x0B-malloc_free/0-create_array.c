#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates array of characters
 *
 * @c:character
 * @size: un assigned int
 *
 * Return:null or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *myarray = (char *)malloc(size * sizeof(char));

	if (size == 0 || myarray == 0)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		myarray[i] = c;
	}
	return (myarray);
}
