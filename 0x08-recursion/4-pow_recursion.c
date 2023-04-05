#include "main.h"
/**
 * _pow_recursion - calculates the power of a number
 * @x: base number
 * @y: exponent or the power
 *
 * Return: the power raised to x, or -1 if y less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
