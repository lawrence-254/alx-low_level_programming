#include <stdio.h>
#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: number in question
 * @index: position of the number
 * Return: new index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1 << index) | *n);
	return (1);
}
