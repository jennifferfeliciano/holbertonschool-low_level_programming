#include "main.h"

/**
 *
 *
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
