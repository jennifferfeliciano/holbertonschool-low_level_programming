#include "main.h"
/**
 *
 *
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
