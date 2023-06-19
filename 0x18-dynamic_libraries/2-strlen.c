#include "main.h"
/**
 * _strlen -  a function that returns the length of a string.
 * @s: string length notation
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
