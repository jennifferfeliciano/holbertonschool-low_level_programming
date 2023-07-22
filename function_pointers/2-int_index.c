#include "function_pointers.h"

/**
 *int_index- function that searches for an integer
 *@array: array to be searched
 *@size: number of elements in the array
 *@cmp: pointer to the function to be used to compare values
 *Return: index of the first element that matches the condition or
 *-1 if there is no match.
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int c, a;

	if (size <= 0 || array == NULL)
		return (-1);

	for (c = 0; c < size; c++)
	{
		a = cmp(array[c]);

		if (a != 0)

		return (c);
	}

	return (-1);
}
