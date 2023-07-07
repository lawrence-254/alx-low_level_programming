#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key
 * @Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	unsigned long int index = key_index(
			(const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	if (new_node == NULL)
		return (0);
	if (index >= ht->size)
		return (0);

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
