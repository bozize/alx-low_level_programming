#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: int
 * Return: value
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square -  returns the natural square root of a number.
 * @f: int
 * @g: int
 * Return: value
 */
int square(int f, int g)
{
	if (g * g == f)
	{
		return (g);
	} else if (g * g > f)
	{
		return (-1);
	}
	return (square(f, g + 1));
}}
