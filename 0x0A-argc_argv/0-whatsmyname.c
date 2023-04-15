#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 *  Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int x;
	char *prog_display;

	prog_display = argv[0];
	(void)argc;

	for (x = 0; prog_display[x] != '\0'; x++)
		printf("%c", prog_display[x]);

	printf("\n");
	return (0);
}
