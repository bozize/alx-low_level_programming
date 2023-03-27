#include "main.h"

/**
* puts_half - main function.
* @str: Pointer, the string of numbers to print.
*
* Description: This function prints half of a string.
*
* Return: none.
*/

void puts_half(char *str)
{
	int i;
	int len_str = 0;
	int half_str;

	for (i = 0; str[i] != '\0'; i++)     /*check the length of the string*/
	{
	len_str++;
	}
	/*printf("%d", len_str);*/

	half_str = len_str / 2;         /*half the length of the string*/
	/*printf("%d", half_str);*/

	for (i = half_str; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
