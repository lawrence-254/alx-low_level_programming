#include "main.h"
/**
 * print_sign - print the sign of the number
 *
 * @n: the number in question
 * Return -1 for negative and 1 for positive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
