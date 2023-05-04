#include "main.h"
/**
 * get_endianness - a function
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *e = (char *) &i;

	return (*e);
}
