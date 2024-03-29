#include "hash_tables.h"
/**
 * key_index -  a function that gives you the index of a key.
 * @key: the key
 * @size: is the size of the array of the hash table
 * Return: index where the new key value is going to be stored in the table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
