#include "main.h"
/**
 * find_sqrt - function that returns the natural square root of a number
 * @n: numeber in question
 * @i: integer
 * Return: squ:xare root
 */
int find_sqrt(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);

	else if (i * i < n)
		return (find_sqrt(i + 1, n));

	else if (i * i == n)
		return (i);

	return (-1);

	return (-1);
}
/**
 * _sqrt_recursion - accepts a function returning squarerrot
 * @n: integer
 * Return: _sqr_recursion
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(i, n));
	}
}
