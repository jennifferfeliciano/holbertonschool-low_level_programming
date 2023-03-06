#include "main.h"

/**
 *print_line- function that draws a straight line
 *@n: number of lines to be printed
 *Return: void
 */

void print_line(int n)
{
	int counter = 0;

	for (; counter < n; counter++)
	{
		if (n > 0)
		{
			_putchar(95);
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
