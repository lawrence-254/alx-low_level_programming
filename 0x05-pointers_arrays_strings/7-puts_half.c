#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: the string in question
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, n = 0;

	while (str[i] != '\0')
		i += 1;
	n = i / 2;
	if (i % 2 == 1)
		n += 1;
	while (str[n] != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
