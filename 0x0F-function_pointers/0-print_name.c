#include "function_pointers.h"


/**
*print_name - prints a name
*@name: The name
*@f: A pointer
*
*Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
