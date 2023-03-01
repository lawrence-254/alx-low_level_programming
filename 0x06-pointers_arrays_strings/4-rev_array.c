#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @n: number of elements  in an array
 * @a: array to be worked on
 * Return: new array
 */
void reverse_array(int *a, int n)
{
	int i, a_tmp;

	for (i = n - 1; i >= n / 2; i--)
	{
		a_tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = a_tmp;
	}
}
