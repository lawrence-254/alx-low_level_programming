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
	unsigned int result = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		int to_integer = b[i] - '0';

		result = 2 * result + to_integer;
	}
	return (result);
}
