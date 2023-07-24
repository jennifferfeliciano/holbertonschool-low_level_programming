#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all- function that adds a list of numbers
 *@n: number of arguments to be added
 *Return: the result of the sum of the numbers
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list arguments;

	unsigned int counter;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(arguments, n);

	for (counter = 0; counter < n; counter++)
	{
		sum += va_arg(arguments, int);
	}

	va_end(arguments);
	return (sum);

}
