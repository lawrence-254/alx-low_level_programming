#include "main.h"
/**
 * print_diagsums - a function that prints the sum o
 * f the two diagonals of a square matrix of integers
 * @size: size to be printed
 * @a: integer to be iterated
 * Return: 0 when successfull
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, y;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
