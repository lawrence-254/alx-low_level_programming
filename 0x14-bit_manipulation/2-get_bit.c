#include "main.h"
/**
 * get_bit - shows what value is at a certain index
 * @n: value in question
 * @index: index in question
 * Return: value found
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
