#include "main.h"
#include <stdio.h>

/**
 *print_diagsums- function that prints the sum of the two digonals
 *of a square matrix of integers.
 *@a: pointer to the matrix
 *@size: size of the matrix
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int counter;
	int upper_left_to_lower_right = 0;
	int upper_right_to_lower_left = 0;

	for (counter = 0; counter < size; counter++)
	{
		upper_left_to_lower_right += *(a + counter * size + counter);
		upper_right_to_lower_left += *(a + counter * size + (size - 1 - counter));
	}

	printf("%d, %d\n", upper_left_to_lower_right, upper_right_to_lower_left);
}
