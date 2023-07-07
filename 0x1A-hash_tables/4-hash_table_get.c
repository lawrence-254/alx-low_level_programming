#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: is the hash table to look into
 * @key: is the key you are looking for
 * Returns: the value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index(
			(const unsigned char *)key, ht->size);
	hash_node_t *current_node = ht->array[index];

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	if (index >= ht->size)
		return (NULL);

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return current_node->value;
		current_node = current_node->next;
	}
	return (NULL);
}
