#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc-Allocates memory for an array, initializing memory to zero.
 *@nmemb:Number of elements in the array.
 *@size:Size of each element in bytes.
 *Return-A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)ptr + i) = 0;
	}

	return (ptr);
}
