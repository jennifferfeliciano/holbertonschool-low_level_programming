#include "main.h"

/**
 *main- Entry point
 *
 *Return: Always 0
 */

void print_alphabet_x10(void)
{
	int  counter = 1;
	char character;

	while (counter <= 10)
	{
		character = 'a';
		while	(character <= 'z')
		{
			_putchar(character);
			character++;
		}

		counter++;
		_putchar('\n');
	}
}
