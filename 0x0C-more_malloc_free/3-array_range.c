#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range -  a function that creates an array of integers
 * @max: maximum
 * @min: minimum
 * Return: an array of integers
 */
int *array_range(int min, int max)
{
	int *arr, t = min, i = 0;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (0);
	while (i <= (max - min))
		arr[i++] = t++;
	return (arr);
}
