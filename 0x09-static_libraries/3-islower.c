#include "main.h"
/**
 * _islower - Entry point
 * @c: first parameter
 *
 * Return: 1 if c is lowercase. 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
