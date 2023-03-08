#include "main.h"
/**
 * ev_num - test for condition
 * @num: integer
 * @i: iterator
 * Return: 0 or 1
 */
int ev_num(int num, int i)
{
	if (i == num - 1)
	{
		return (1);
	}
	else if (num % i == 0)
	{
		return (0);
	}
	if (num % i != 0)
	{
		return (ev_num(num, i + i));
	}
	return (0);
}
/**
 * is_prime_number - checks if a number is prime or not
 * @n: number to be checked
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (ev_num(num, i));
}
