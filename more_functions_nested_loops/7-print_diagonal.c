#include "main.h"

/**
 *print_diagonal- function that draws a diagonal line
 *@n: number of \ to be printed
 *Return: void
 */

void print_diagonal(int n)
{
	int counter = 0;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (; counter < n; counter++)
		{
			for (s = 0; s < counter; s++)
			{
				_putchar(' ');
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
