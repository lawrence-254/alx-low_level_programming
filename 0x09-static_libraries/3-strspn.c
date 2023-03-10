#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: main string
 * @accept: gets the length
 * Return: 0 when successfully run
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int n = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
