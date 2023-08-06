#include "main.h"

/**
 *reverse_array- function that reverses the content of an array
 *@a: array to be reversed
 *@n: elements of the array
*/

void reverse_array(int *a, int n)
{
	int counter, temp;

	for (counter = 0; counter < n / 2; counter++)
	{
		temp = a[counter];
		a[counter] = a[n - counter - 1];
		a[n - counter - 1] = temp;
	}
}
