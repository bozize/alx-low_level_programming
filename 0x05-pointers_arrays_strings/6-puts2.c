#include "main.h"

/**
 * puts2 - main function.
 * @str: Pointer, the string to print.
 *
 * Description: This function prints every other character of a string
 * (divisible by two)
 * Return: none.
 */

void puts2(char *str)
{
	int i;	/* declare integer variable i*/

	/* loop the string, incrementing i by 2 each time to skip character*/
	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);	/* print the character at index i using _putchar*/
	}
	_putchar('\n');	/* print a newline character using _putchar*/
}
