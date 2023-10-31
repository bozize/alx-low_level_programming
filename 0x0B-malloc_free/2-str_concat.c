#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings and returns a pointer
 *
 * @s1: parameter to concatenate
 * @s2: parameter to cncatenate
 *
 * Return: returned pointer, or fail or null
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = (char *)malloc(len1 + len2 + 1);

	if (result != NULL)
	{
		strcpy(result, s1);
		strcat(result, s2);
	}

	return (result);
}

