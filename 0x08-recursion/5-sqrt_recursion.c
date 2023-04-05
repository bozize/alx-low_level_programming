#include "main.h"
int get_sqrt(int n, int y);
/**
 * _sqrt_recursion - returbs the natural square root os a number
 * @n: the number to retuen
 *
 * Return: square root, -1 if uts nit natural number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (get_sqrt(n, 0));
}

/**
 * get_sqrt - finds square root
 * @n: previous value
 * @y: sqrt value
 *
 * Return: square root
 */
int get_sqrt(int n, int y)
{
	if (y * y > n)
		return (-1);
	if (y * y == n)
		return (y);
	return (get_sqrt(n, y + 1));
}
