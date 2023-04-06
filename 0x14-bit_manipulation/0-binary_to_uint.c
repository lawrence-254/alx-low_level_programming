#include <stdio.h>
#include <string.h>
#include <math.h>
#include"main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: poiinter to the location of  number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int bit_size = strlen(b);
	unsigned int result = 0;

	for (int i = 0; i < bit_size; i++;)
	{
		int to_integer = b[1] - '0';
		int super = bit_size - 1 - i;
		int new = to_integer *(unsigned int) pow(2,super);
		result += new;
	}
	return result;
}
