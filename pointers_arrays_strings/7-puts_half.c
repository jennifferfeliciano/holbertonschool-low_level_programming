#include "main.h"

/**
 *
 *
 */

void puts_half(char *str)
{
	int counter = 0;
	int n;

	while (str[counter] != '\0')
	{
	counter++;
	}

	if (counter % 2 == 1)
	{
	n = (counter - 1) / 2;
	}

	else
	{
	n = counter / 2;
	}

	for ( ; n <= counter ; n++)
	{
	_putchar(str[n]);
	}

	_putchar('\n');
}

