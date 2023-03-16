#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @old_size: old size
 * @new_size: new size
 * @ptr: pointer
 * Return: pointer to reallocation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *clone, *relloc;

	if (ptr != NULL)
	{
		clone = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	relloc = malloc(new_size);
	if (relloc == NULL)
	{
		return (0);
	}
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc + i) = clone[i];
	}
	free(ptr);
	return (relloc);
}
