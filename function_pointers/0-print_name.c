#include "function_pointers.h"
#include <stddef.h>

/**
 *print_name- function that prints a name using a function pointer
 *@name: name to be printed.
 *@f: pointer to function
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
