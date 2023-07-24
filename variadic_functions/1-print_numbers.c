#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *print_numbers- function that prints a series of numbers
 *@separator: string that separate the numbers
 *@n: number of arguments to be passed
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int counter = 0;

	va_list arguments;

	va_start(arguments, n);

	for (; counter < n; counter++)
	{
		printf("%i", va_arg(arguments, int));

		if (separator != NULL && counter < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(arguments);
}
