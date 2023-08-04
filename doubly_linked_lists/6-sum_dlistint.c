#include "lists.h"

/**
 *sum_dlistint- function that return the sum of all the data if a linked list
 *@head: pointer to the first node of the list
 *Return: sum of all the data of the list or 0 if empty
 */


int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head->next == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
