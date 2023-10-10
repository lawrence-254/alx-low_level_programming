#include "search_algos.h"
#include <math.h>
/*
 * binary_search - searches for a value in a sorted array of integers
 * @array:  pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: the value to search for
 * Return: the index where value is located or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int medium;

	while (low <= high)
	{
		medium = floor((double)(high - low) / 2);

		if (array[medium] < value)
		{
			printf("Value checked array[%d] = [%d]\n",
					medium, array[medium]);
			low = medium + 1;
		} else if (array[medium] > value)
		{
			printf("Value checked array[%d] = [%d]\n",
					medium, array[medium]);
			high = medium - 1;
		} else
		{
			printf("Value checked array[%d] = [%d]\n",
					medium, array[medium]);
			return (medium);
		}
	}
	return (-1);
}
