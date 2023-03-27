#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string
 *
 * Return: none
 */
void print_rev(char *s)
{
	int L = 0;

	while (*s != '\0')
	{
		L++;
		s++;
	}

	for (int i = L - 1; i >= 0; i--)
	{
		s--;
		_putchar(*s);
	}

	_putchar('\n');
}


