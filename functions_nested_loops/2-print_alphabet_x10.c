#include "main.h"

/**
 *print_alphabet_x10- print the alphabet ten times
 *Return: void
 */

void print_alphabet_x10(void)
{
int counter = 0;
char letter;

for (; counter <= 9; counter++)
{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
_putchar('\n');
}
}
