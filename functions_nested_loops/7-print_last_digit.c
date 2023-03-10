#include "main.h"

/**
 *print_last_digit- prints the last digit of a number
 *@n: number to be evaluated
 *Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit *= -1;
	}
	_putchar(digit + '0');
	return (digit);
}
