#include "main.h"
/**
 * _islower - checks for lowercase characters
 *
 * Return: 1 if lowercase character
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
