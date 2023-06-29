#include "main.h"

/**
 *puts_half- prints half of a string
 *@str: string to be printed
 *return: void
 */

void puts_half(char *str)
{
	int counter = 0;
	int n = 0;

	for (; str[counter] != '\0'; counter++)
	{
	}

	if (counter % 2 == 0)
	{
		n = (counter / 2);
	}
	else
		n = (counter - 1) / 2;


	for ( ; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
