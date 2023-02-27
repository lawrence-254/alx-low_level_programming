#include "main.h"
/**
 * _atoi - a function that convert a string to an integer.
 * @s: string in question
 * Return: an integer
 */
int _atoi(char *s)
{
	int i = 0, n = 0, j = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			j *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			n = n  * 10 - (s[i] - '0');
			i++;
		}
	}
	j *= -1;
	return (n * j);
}
