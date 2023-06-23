#include "main.h"
#include <stdio.h>

/**
 *print_to_98- function that prints all natural numbers fromm n to 98
 *@n: the number to print from
 *Return: void
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n > 98)
			{
				printf(", ");
			}
		}
	}

	else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
