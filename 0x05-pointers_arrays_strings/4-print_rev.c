#include "main.h"
#include <stdio.h>
/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line
 * @s: the string in question
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
