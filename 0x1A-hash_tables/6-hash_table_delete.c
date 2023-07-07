#include "hash_tables.h"

/**
 * hash_table_delete -  a function that deletes a hash table
 * ht: is the hash table
 * Return: 0 or 1
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t *next_node;

	if (ht == NULL)
		return;
	
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		
		while (node != NULL)
		{
			next_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next_node;
		}
	}
	
	free(ht->array);
	free(ht);
}
