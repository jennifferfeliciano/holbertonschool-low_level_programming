#include "main.h"

/**
 *print_triangle- function that prints a triangle
 *@size: x and y values
 *return: void
 */

void print_triangle(int size)
{
	int y, x;

	if (size <= 0)
		_putchar('\n');

	for (y = 1; y <= size; y++)
	{
		for (x = 1; x <= size; x++)
		{
			if (y > size - x)
				_putchar(35);
			else if (y == size + x)
				_putchar(35);
			else
				_putchar(' ');
		}

		_putchar('\n');
	}
}
