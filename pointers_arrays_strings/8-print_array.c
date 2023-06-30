#include "main.h"
#include <stdio.h>

/**
 *print_array- prints n elementrs of an array of integers
 *@a: array to be print
 *@n: elements of an array of integers
 *Return: void
 */

void print_array(int *a, int n)
{
	int counter = 0;

	for (; counter < n; counter++)
	{
		printf("%d", a[counter]);

		if (counter != (n - 1))

			printf(", ");
	}
	printf("\n");
}
