#include "main.h"
#include <stdio.h>
/**
 * _puts -  a function that prints a string,
 * followed by a new line, to stdout
 * @str: the string to be printed
 * Return: string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
