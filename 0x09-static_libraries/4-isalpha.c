#include "main.h"
/**
 * _isalpha - Entry point
 * @c: parameter
 * Return: 1 if letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
