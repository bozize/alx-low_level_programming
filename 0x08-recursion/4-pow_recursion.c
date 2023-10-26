#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - calculates power of a number
 *
 * @x: parameter
 * @y: parameter
 *
 * Return: always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
		else
		{
			return (x * _pow_recursion(x, y - 1));
		}
}
