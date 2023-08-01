#include "lists.h"

/**
 *list_len- function thar returns the number of elementes in a list
 *@h: pointer to the head node of the list.
 *Return: the number of elements in a list.
 */

size_t list_len(const list_t *h)
{
size_t counter;

	if (h == NULL)
		return (0);
	for (counter = 0; h != NULL; h = h->next, counter++)
	{
		if (h->next == NULL)
			break;
	}
	return (counter + 1);
}
