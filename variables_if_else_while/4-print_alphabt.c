#include <stdio.h>
#include <stdlib.h>

/**
 *main- Entry point
 *Return: Always 0
 */

int main(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
		if (letter != 'q' || letter != 'e')
			putchar(letter);
	putchar('\n');
	return (0);
}
