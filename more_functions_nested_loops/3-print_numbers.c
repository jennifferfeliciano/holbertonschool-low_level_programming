#include "main.h"

/**
 *print_numbers- prints the numbers from 0 to 9, followed by a newline
 *Return: void
 */

void print_numbers(void)
{
	int counter = 0;

	while (counter <= 9)
	{
		_putchar(counter + '0');
		counter++;
	}
	_putchar('\n');
}
