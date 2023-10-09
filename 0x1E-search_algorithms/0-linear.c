#include "search_algos.h"
/**
* linear_search - Linear search algorithm function
* @array: pointer to the first element of the array to search in
* @size:number of elements in array
* @value: value to search for
* Return: first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array != NULL)
	{
		for (i = 0; i < (int) size; i++)
		{
			if (array[i] == value)
			{
				return (i);
			}
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
