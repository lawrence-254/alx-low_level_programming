#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump Search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 * Return: The index of the first occurrence of the value, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t sqr, lo, hi;

	if (array == NULL || size < 1)
		return (-1);

	lo = 0;
	sqr = sqrt(size);
	hi = sqr;

	while (1)
	{
		printf("Value checked array[%lu] = [%d]\n", lo, array[lo]);
		if (hi >= size || array[hi] >= value)
			break;
		lo = hi;
		hi += sqr;

	}

	printf("Value found between indexes [%lu] and [%lu]\n", lo, hi);

	for (; lo < hi + 1 && lo < size; lo++)
	{
		printf("Value checked array[%lu] = [%d]\n", lo, array[lo]);
		if (array[lo] == value)
			return (lo);
	}

	return (-1);
}
