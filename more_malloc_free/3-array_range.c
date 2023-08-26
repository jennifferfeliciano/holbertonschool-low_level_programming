#include <stdio.h>
#include <stdlib.h>

/**
 *array_range-Creates an array of integers containing values from min to max.
 *@min:The minimum value for the array.
 *@max: The maximum value for the array.
 *Return: A pointer to the newly created array, or NULL if min > max or
 *if memory allocation fails.
 */
int *array_range(int min, int max)
{
	int i;
	int *result;

	if (min > max)
	{
		return (NULL);
	}

	result = (int *)malloc((max - min + 1) * sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		result[i] = min + i;
	}

	return (result);
}
