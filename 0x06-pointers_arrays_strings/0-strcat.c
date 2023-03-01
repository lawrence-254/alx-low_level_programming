#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @src: string to be appended
 * @dest: string to be appended to
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, s_l = 0;

	while (dest[i++])
		s_l++;
	for (i = 0; src[i]; i++)
		dest[s_l++] = src[i];
	return (dest);
}
