#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: a pointer to the memory area
 * @b:  character that is in the memory
 * @n: size of the memory to be filled
 * Return: the memory and its contents
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
