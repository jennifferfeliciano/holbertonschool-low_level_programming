#include <stdio.h>
#include <stdlib.h>

/**
 *main- Entry point
 *Return: Always 0
 */

int main(void)
{
	char letter = 'a';
	char uppercase_letter = 'A';

	for (; letter <= 'z'; letter++)
		putchar(letter);
	for (; uppercase_letter <= 'Z'; uppercase_letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
