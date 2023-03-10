#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: string to be added to
 * @src: string to be added
 * @n: number of space to be used from source
 * Return: new conditional string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, s_l = 0;

	while (dest[i++])
		s_l++;
	for (i = 0; src[i] && i < n; i++)
		dest[s_l++] = src[i];
	return (dest);
}
