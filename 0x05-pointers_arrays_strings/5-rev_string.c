#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: the string in question
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, aux = 0;
	char temp;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;
	while (aux < i)
	{
		temp = s[i];
		s[i] = s[aux];
		s[aux] = temp;
		aux++;
		i--;
	}
}
