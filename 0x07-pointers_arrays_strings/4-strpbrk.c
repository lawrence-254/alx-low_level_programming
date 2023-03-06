#include "main.h"
/**
 * _strpbr - a function that searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept:confirms the answer
 * Return: 0 when succesfully executed
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
