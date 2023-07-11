#include "main.h"
#include <stdlib.h>

/**
 *create_array- function that creates an array of chars
 *@size: represent the size of the array to be created
 *@c: char that will be used to initialize all elements of the array
 *Return: Pointer to the array, Null if size is 0 or  NUll if it fails
 */

char *create_array(unsigned int size, char c)
{

char *array;
unsigned int counter;

if (size == 0)
{
	return (NULL);
}

array = malloc(size * sizeof(char));
	if (NULL)
	{
		return (NULL);
	}

for (counter = 0; counter < size; counter++)
	{
	array[counter] = c;
	}

return (array);
}
