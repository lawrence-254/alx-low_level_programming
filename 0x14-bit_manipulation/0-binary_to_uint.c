#include "main.h"
/**
 * binary_to_uint - converts a binary number to a positive number
 * @b: the binary number in question
 * Return: 0 or a positive number(pos_num)
 * /
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int pos_num = 0;

	if (!b)
	{
		return (0);
	}
		for (i = 0; b[i]; i++)
		{
			if (b[i] < '0' || b[i] > '1')
				return (0);
			pos_num = 2 * pos_num + (b[i] - '0');
		}

	return (pos_num);
}
