#include "search_algos.h"
/*
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: the value to search for
 * Return: the index where value is located or NULL
 */
int binary_search(int *array, size_t size, int value)
