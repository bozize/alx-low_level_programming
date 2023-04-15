#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *look_num - check number
 *@str: array str
 *Return: 0
 */
int look_num(char *str)
{
	unsigned int x;

	x = 0;
	while (x < strlen(str))
	{
		if (!isdigit(str[x]))
		{
			return (0);
		}

		x++;
	}

	return (1);
}

/**
 *main - entry point
 *@argc: number of args
 *@argv: Args
 *Return: 0
 */
int main(int argc, char *argv[])

{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (look_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);
	return (0);
}

