#include "main.h"
/**
 *print_last_digit- print the last digit of a number
 *@n: number
 *Return: value of the last digit
 */

int print_last_digit(int n)
{
	int d;

	d = n % 10;

	if (d < 0)
	{
		d *= -1;
	}
	_putchar('0' + d);
	return (d);
}
