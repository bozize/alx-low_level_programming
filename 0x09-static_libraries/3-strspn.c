#include "main.h"
/**
 * _strspn - function that gets the lenght of prefex substring
 * @s: string
 * @accept: string
 *
 * Return: count variable
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;
	int x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x]; x++)
		{
			if (s[i] == accept[x])
			{
				count++;
				break;
			}
		}
	if (accept[x] != s[i])
	{
		break;
	}
	}

	return (count);
}
