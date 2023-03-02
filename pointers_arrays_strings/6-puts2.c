#include "main.h"

/**
 *puts2- function that prints every other character of a string
 *@str: string to be outputted
 *Return: void
 */

void puts2(char *str)
{
	int counter = 0;

	for ( ; str[counter] != '\0'; counter += 2)
	{
		_putchar(str[counter]);
	}
	_putchar('\n');
}
