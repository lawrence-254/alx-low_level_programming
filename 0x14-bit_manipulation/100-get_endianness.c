#include "main.h"
/**
 * get_endianness - a function
 * Return: 0 or 1
 */
int get_endianness(void)
{

	unsigned int i = 0;
	char *C = (char *) &i;

	return (*C);
}
