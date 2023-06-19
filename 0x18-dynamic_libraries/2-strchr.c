#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: string to search from
 * @c: character to be searched
 * Return: searched character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
