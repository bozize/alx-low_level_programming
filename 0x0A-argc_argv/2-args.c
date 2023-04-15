#include <stdio.h>
#include "main.h"

/**
* main - entry point
* @argc: number of arguments passed to it
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])

{
int pr;
for (pr = 0; pr < argc; pr++)
{
	printf("%s\n", argv[pr]);
}
return (0);
}
