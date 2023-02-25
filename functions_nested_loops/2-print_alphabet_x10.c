#include "main.h"

/**
 *print_alphabet- print the alphabeth 10 times
 *Return: void
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
