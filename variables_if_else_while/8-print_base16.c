#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 */

int main(void)
{
	int num = 0;
	int n = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	while (n < 6)
	{
		putchar(n + 'a');
		n++;
	}

	putchar('\n');
	return (0);
}
