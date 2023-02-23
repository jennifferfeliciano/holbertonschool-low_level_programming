#include <stdio.h>
#include <stdlib.h>

/**
 *main- Entry point
 *Return: Always 0
 */

int main(void)
{
	char character = 'a';
	char character_e = 'e';
	char character_q = 'q';

	while (character <= 'z')
	{
		if (character != character_e && character != character_q)
		{
			putchar(character);
		}

		character++;
	}

	putchar('\n');

	return (0);

}
