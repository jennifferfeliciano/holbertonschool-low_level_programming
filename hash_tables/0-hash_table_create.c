#include <stdlib.h>
#include "hash_tables.h"

/**
 *hash_table_create- function that creates a new hash table
 *@size: number of buckets for the hash table
 *Return: pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;
	unsigned long int counter;

	if (size == 0)
	{
		return (NULL);
	}

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
	{
		return (NULL);
	}

	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}

	new_hash_table->size = size;

	for (counter = 0; counter < size; counter++)

	{
		new_hash_table->array[counter] = NULL;
	}

	return (new_hash_table);
}

