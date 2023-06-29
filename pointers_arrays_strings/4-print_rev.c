#include "main.h"

/**
 *print_rev- prints a string in reverse
 *@s: string to be reversed
 *Return: void
 */

void print_rev(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
	}
	for (counter -= 1; counter >= 0; counter--)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}
