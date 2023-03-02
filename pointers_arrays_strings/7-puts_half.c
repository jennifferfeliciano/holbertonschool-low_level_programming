#include "main.h"

/**
 *puts_half- funtion that prints half of a string
 *@str: string to print half of
 *Return: void
 */

void puts_half(char *str)
{
	int counter = 0;
	int n;

	while (str[counter] != '\0')
	{
	counter++;
	}

	if (counter % 2 == 0)
	{
	n = (counter) / 2;
	}

	else
	{
	n = (counter - 1) / 2;
	}

	for ( ; n < counter ; n++)
	{
	_putchar(str[n]);
	}

	_putchar('\n');
}

