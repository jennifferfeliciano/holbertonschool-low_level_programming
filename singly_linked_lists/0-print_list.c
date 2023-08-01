#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *print_list- Function that prints the elements of a list
 *@h: Pointer to the head of the list
 *Return: number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; h = h->next, counter++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	}
	return (counter);
}
