#include "main.h"

/**
 *more_numbers- prints numbers from 0 to 14, 10 times
 *Return: void
 */

void more_numbers(void)
{
	int x, y, first_digit, second_digit;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				first_digit = y / 10;

				_putchar(first_digit + '0');

			}

			second_digit = y % 10;

			_putchar(second_digit + '0');
		}
	_putchar('\n');
	}
}
