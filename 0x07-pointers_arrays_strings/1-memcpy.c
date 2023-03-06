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
	unsigned int i;
	unsigned char *to = dest, *s = src;

	for (i = 0; i < n; i++)
	{
		to[i] = s[i];
	}
	return (to);
}
