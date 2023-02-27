#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: 0 on a successfull swap
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
