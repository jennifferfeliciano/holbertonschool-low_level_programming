#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *array_iterator- function that executes a function given.
 *@array: pointer to the first element of the array which
 *will be passed into the function
 *@size: size of the array
 *@action: function to be executed
 *return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t counter;

	if (array == NULL || action == NULL)
		return;

	for (counter = 0; counter < size; counter++)

		action(array[counter]);

}
