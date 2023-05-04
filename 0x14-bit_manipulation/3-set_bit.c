#include "main.h"
/**
 * set_bit - converts value of an index to 1
 * @n: pointer to the value
 * @index: index in question
 * Return: 1 pass else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
