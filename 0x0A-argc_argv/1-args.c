#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: is the number of arguments passed to it
 * @argv: array
 * Return: 0 success else number
 */

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", 0);
	return (0);
}
