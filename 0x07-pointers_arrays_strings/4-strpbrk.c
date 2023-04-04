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
	char i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
