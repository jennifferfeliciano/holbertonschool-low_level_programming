#include "main.h"

/**
 *print_sign- print the sign of a number.
 *@a: number to check for sign
 *Return: 1 if greater than zero, 0 if equals 0 and -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
