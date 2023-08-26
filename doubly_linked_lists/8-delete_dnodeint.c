#include <stdio.h>
#include <stdlib.h>

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
}

dlistint_t;

/**
 * delete_dnodeint_at_index - Deletes the node at a specified index
 * in a doubly linked list.
 * struct dlistint_s - Doubly linked list node structure
 * @head: Double pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted. Index starts at 0.
 * Return: 1 on successful deletion, -1 if the index is out
 * of bounds or the list is empty.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}

