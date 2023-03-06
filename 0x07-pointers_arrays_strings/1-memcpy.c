#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: where we copy to
 * @src: where we copy from
 * @n:size in bytes copied from @src
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
