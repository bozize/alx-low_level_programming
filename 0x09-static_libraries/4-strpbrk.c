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
	char *k;
	int i;
	int j;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				k = &s[i];
				return (k);
			}
		}
	}
	return (0);
}
