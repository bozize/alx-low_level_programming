#include "main.h"
/**
 * _strpbrk - function that searches a string for of a set of bytes
 * @s: string
 * @accept: string
 *
 * Return: pointer to byte in s or null
 */
char *_strpbrk(char *s, char *accept)
{
	char j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
