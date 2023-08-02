#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node- function that adds a new node at the beginning of a list.
 *@head: pointer to the first node
 *@str: string to be duplicated
 *Return: address of the new node or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t counter;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (counter = 0; str[counter] != '\0'; counter++)
	{}

	new_node->next = *head;
	new_node->len = counter;
	*head = new_node;

	return (new_node);
}
