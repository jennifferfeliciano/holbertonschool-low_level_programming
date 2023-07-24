#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *print_strings- function that prints strings
 *@separator: string to be printed between the strings
 *@n: number of strings passed
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter = 0;

	va_list arguments;

	va_start(arguments, n);

	for (; counter < n; counter++)
	{
		char *s = va_arg(arguments, char*);

		if (s != NULL)

			printf("%s", s);

		else
			printf("(nil)");


		if (separator != NULL && counter < n - 1)
		printf("%s", separator);
	}

	printf("\n");

	va_end(arguments);
}
