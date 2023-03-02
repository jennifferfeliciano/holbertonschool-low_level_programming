#include "main.h"
#include <stdio.h>

/**
 *print_array- function that prints n elements of an array of integers
 *@a: array of integers to be printed
 *@n: number of elements of the array to be printed
 *Return: void
 */

void print_array(int *a, int n)
{
	int counter = 0;

	while (a[counter] != '\0')
	{
	counter++;
	}
	for (n = 0; n < counter ; n++)
	{
	printf("%d, ", a[n]);
	}

	printf("\n");
}
