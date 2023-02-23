#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		putchar(character);

		putchar('\n');

		character++;
	}
	return (0);
}
