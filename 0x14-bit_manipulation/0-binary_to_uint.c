#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint- converts binary to interger
 * @b:the binary number
 *
 * Return:unsigned interger
 */
unsigned int binary_to_uint(const char *b)
{

	if (b == NULL)
	{
		return (0);
	}

	unsigned int final = 0;
	int hold = 0;

	while (b[hold] != '\0')
	{
		if (b[hold] != '0' && b[hold] != '1')
		{
			return (0);
		}

		final = final * 2 + (b[hold] - '0');
		hold++;
	}

	return (final);
}
