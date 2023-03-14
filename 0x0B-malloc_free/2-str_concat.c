#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strlen - gets length
 * @s: string in question
 * Return: lenhgth
 */
int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * *str_concat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);
	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == 0)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(ptr + i) = *(s2 + j);
		i++;
	}
	return (ptr);
}
