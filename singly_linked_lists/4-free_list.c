#include "lists.h"
#include <stdlib.h>


/**
 *free_list- function that frees a list.
 *@head: pointer to the first node.
 *Return: void
 */

void free_list(list_t *head)
{

	list_t *next;

	if (head == NULL)
		return;

	while (head != NULL)
	{
	next = head->next;
	free(head->str);
	free(head);
	head = next;
	}
}
