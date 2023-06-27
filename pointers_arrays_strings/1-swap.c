#include "main.h"

/**
 *swap_int- swaps the values of two integers
 *@a: first integer to be swapped
 *@b: second integer to be swapped
 *return: void
 */

void swap_int(int *a, int *b)
{

int c = 0;

c = *a;
*a = *b;
*b = c;

}
