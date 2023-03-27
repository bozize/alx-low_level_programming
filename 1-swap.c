#include "main.h"
/**
 *  swap_int - swaps the values of two intergers
 *
 *  @a: integer to swap
 *  @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
