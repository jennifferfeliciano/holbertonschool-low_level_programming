#include "main.h"

/**
 *puts2- function that prints every other character of a string
 *@str: string to be outputted
 *Return: void
 */

void puts2(char *str)
{
	int counter = 0;
	int a = 0;

	for (; str[a] != '\0'; a++)
	{
	}

	for ( ; counter < a; counter += 2)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}
