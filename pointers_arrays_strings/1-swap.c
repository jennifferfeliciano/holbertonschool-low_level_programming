#include "main.h"
/**
 *swap_int- function that swaps the value of two integers.
 *@a: first integer to be swapped
 *@b: second integer to be swapped
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
