#include "main.h"
/**
 * _pow_recursion - a function returning value of x raised to the power of y
 * @x: number in question
 * @y: power in question
 * Return: -1 when y = 0 or result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}

