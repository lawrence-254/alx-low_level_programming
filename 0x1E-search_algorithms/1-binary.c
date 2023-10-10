#include "search_algos.h"
/*
 * binary_search - Performs binary search on an array of sorted integers.
 *
 * @array:  pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: the value to search for
 * Return: the index where value is located or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int medium, i;

	while (low <= high)
	{
		medium = ((high - low) / 2) + low;

		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (value == array[medium])
			return (medium);
		else if (value < array[medium])
			high = medium + 1;
		else
			low = medium + 1;
	}
	return (-1);
}
