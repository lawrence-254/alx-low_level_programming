#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size ofthe array
 * @c: chararcter to assign
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
