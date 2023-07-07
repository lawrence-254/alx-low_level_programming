#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table.
 * @size: the size of the array
 * Return:a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(
				hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->array = (hash_node_t **)malloc(size * sizeof(
				hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	hash_table->size = size;
	return (hash_table);
}
