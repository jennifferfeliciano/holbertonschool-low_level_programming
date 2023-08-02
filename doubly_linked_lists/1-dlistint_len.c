#include "lists.h"

/**
 *dlistint_len- function that return the number of elements in a linked list.
 *@h: pointer to the head of a list.
 *Return: the number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	while (h != NULL && h->prev != NULL)
	{
		h = h->prev;
		counter++;
	}

	return (counter);
}

