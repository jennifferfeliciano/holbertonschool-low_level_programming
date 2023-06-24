#include "main.h"

/**
 *print_square- funtion that prints a square
 *@size: size of the square
 *Return: void
 */

void print_square(int size)
{
	int y, x;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (x  = 0; x < size; x++)
		{
			for (y	= 0; y < size; y++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
}
