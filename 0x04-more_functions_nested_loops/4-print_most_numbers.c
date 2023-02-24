#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - does not print 2 and 4
 * return: void
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			putchar(c);
	}
	putchar('\n');
}
