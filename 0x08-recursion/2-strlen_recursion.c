#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - calculates lenght ofstring with recursion
 *
 * @s: pointer to a string
 *
 * Return: leghth of string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n = 1 + _strlen_recursion(s + 1);
	}

	return (n);
}
