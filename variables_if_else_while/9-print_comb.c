#include <stdio.h>

/**
 *main- Entry point
 *Return: always 0
 */

int main(void)
{
	int n = 0;

	for (; n < 10; n++)
	{
		putchar(n + '0');

		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
