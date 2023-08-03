#include "lists.h"

/**
 *free_dlistint- function that frees a list.
 *@head: pointer to the first node.
 *Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

