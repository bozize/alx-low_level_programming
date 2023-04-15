#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arguments number
 * @argv: array of arguments passed to main
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int product;
	int num1;
	int num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		product = num1 * num2;
		printf("%d\n", product);
	}
	return (0);
}
