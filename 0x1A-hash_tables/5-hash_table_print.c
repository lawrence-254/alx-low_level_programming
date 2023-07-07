#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 * @ht: is the hash table
 * Return: print table if not null
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			printf("Key: %s, Value: %s\n", node->key, node->value);
			node = node->next;
		}
	}
}
