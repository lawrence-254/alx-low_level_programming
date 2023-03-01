#include "main.h"
#include <stdio.h>
/**
 * print_number -  a function that prints an integer.
 * @n: integer in question
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);

	putchar((num % 10) + '0');
}
