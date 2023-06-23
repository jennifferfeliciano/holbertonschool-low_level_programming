#include "main.h"
/**
 *times_table- function that prints 9 times table starting with 0
 *Return: void
 */
void times_table(void)
{
	int x, y, mult, first_digit, last_digit;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			mult = (x * y);
			if (mult > 9)
			{
				first_digit = mult / 10;
				last_digit = mult % 10;

					_putchar(',');
					_putchar(' ');
					_putchar(first_digit + '0');
					_putchar(last_digit + '0');
			}
			else
			{
				if (y > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mult + '0');
			}
		}
		_putchar('\n');
	}
}
