#include "main.h"
#include <stdio.h>

/**
 *factorial- function that return the factorial of a given number
 *@n: number to take the factorial of
 *Return: factorial value
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}

