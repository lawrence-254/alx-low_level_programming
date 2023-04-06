#include <stdio.h>
#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: number in question
 * @index: index of the number
 * Return: value of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	result = (n >> index) & 1;
	return (result);
}
