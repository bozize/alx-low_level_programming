#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that return pointer to new allocated memory
 *
 * @str: parameter to duplicate
 *
 *
 * Return:pointer to the duplicate string
 */
char *_strdup(char *str)
{
	char duplicate;

	if (str == 0)
	{
		return (NULL);
	}

	char *duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == 0)
	{
		return (NULL);
	}

	strcpy(duplicate, str);
	return (duplicate);
}
