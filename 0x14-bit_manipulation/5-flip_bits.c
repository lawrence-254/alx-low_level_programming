#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 *  to get from one number to another
 * @n: num1
 * @m: num2
 * Return: changed bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int xor = n ^ m, new;
for (i = 63; i >= 0; i--)
{
	new = xor >> i;
	if (new & 1)
	{
		count++;
	}
}
return (count);
}
