#include "main.h"
/**
 * print_sign - returns the sign of the number in question i.e + for positive
 * @n: the number in question
 * Return: 1 for posotive, 0 for anything else, -1 for negative numbers
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
