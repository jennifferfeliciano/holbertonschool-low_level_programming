#include "lists.h"


/**
 *print_dlistint- function that prints all the elements of a list.
 *@h: pointer to the head of a list.
 *Return: the number of nodes.
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	while (h != NULL && h->prev != NULL)
	{
		printf("%d\n", h->n);
		h = h->prev;
		counter++;
	}
	return (counter);
}
