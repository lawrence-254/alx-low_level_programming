#include "main.h"
/**
 * clear_bit - changes value in the index to zero
 * @n: pointer to the value
 * @index: index of the value
 * Return: pass 1 else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
