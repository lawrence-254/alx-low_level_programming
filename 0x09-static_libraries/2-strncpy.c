#include "main.h"
/**
 * _strncpy - a function that copies a string.
 *@dest: string to be copied to
 *@src: string to be copied
 *@n: size of the string to be copied
 *Return: new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, s_l = 0;

	while (src[i++])
		s_l++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = s_l; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
