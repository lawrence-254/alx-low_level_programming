#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: the string in question
 * Return: a pointer to the new space
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i = 1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		ptr[j] = str[j];
	return (ptr);
}
