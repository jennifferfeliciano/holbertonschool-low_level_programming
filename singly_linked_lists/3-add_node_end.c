#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 *add_node_end- function that adds a new node at the end of a list.
 *@head: pointer to the first node
 *@str: string to be duplicated
 *Return: address of the new node or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node_end, *temp;
	size_t counter;

	new_node_end = malloc(sizeof(list_t));

	if (new_node_end == NULL)
		return (NULL);

	new_node_end->str = strdup(str);
	if (new_node_end->str == NULL)
	{
		free(new_node_end);
		return (NULL);
	}

	for (counter = 0; str[counter] != '\0'; counter++)
	{}

	new_node_end->next = NULL;
	new_node_end->len = counter;

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
	}
	return (new_node_end);
}

