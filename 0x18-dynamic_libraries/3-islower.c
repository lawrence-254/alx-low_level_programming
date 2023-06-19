#include "main.h"
/**
 * _islower - checks for lowercase characters
 *@c: the character to be checked
 * Return: 1 if c is a lowercase character and 0 on any other occassion
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
