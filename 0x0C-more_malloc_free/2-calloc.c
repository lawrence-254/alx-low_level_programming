#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: of each position
 * Return: a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
