#include "main.h"
#include <stdio.h>
/**
 * print_array - prints a list of items on the terminal
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
