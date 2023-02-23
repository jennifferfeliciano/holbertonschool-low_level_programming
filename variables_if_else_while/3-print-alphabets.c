#include <stdio.h>
#include <stdlib.h>

/**
 *main- Entry point
 *Return: Always 0
 */

int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		putchar(character);

		character++;
	}

	char character_uppercase = 'A';

	while (character_uppercase <= 'Z')
	{
		putchar(character_uppercase);

		character_uppercase++;
	}


	putchar('\n');

	return (0);
}
