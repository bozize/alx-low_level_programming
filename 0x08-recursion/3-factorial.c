#include <stdio.h>
#include "main.h"
/**
 * factorial - calculates factorial of a number
 *
 * @n: factorial number to be calculated
 *
 * Return: the calculated factorial
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
				}
				}
