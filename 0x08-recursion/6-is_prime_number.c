#include "main.h"
/**
 * ev_num - test for condition
 * @n: integer
 * @i: iterator
 * Return: 0 or 1
 */
int ev_num(int n, int i)
{
	if (i == n - 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	if (n % i != 0)
	{
		return (ev_num(n, i + i));
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
	int i;

	i = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (ev_num(n, i));
}
