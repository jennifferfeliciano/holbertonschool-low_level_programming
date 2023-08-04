#include "lists.h"
#include <stddef.h>

/**
 *get_dnodeint_at_index- function that returns the nth node of a linked list.
 *@head: pointer to the head of the list
 *@index: index of the node to get
 *Return: pointer to nth node of a list or NULL if doesn't existed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);


	temp = head;
	while (temp != NULL && counter != index)
	{
		temp = temp->next;
		counter++;
	}

	return (temp);

}
