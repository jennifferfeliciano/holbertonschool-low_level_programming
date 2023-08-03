#include "lists.h"
/**
 *add_dnodeint_end- function that adds a new node at the end of a list.
 *@head: pointer to the first node
 *@n: integer to be added to node
 *Return: address of the new node or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node_end, *temp;

	new_node_end = malloc(sizeof(dlistint_t));

	if (new_node_end == NULL)
		return (NULL);

	new_node_end->n = n;

	if (new_node_end == NULL)
	{
		free(new_node_end);
		return (NULL);
	}

	new_node_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_end;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node_end;
		new_node_end->prev = temp;
	}
	return (new_node_end);
}

