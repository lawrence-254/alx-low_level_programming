#include "main.h"
/**
 * flip_bits - return no of bits to be flipped
 * @n: num1
 * @m: num2
 * Return: no of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, len = 0;
	unsigned long int num, flipper = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num = flipper >> i;
		if (num & 1)
			len++;
	}
	return (len);
}
