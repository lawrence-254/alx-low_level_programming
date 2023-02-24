#include "main.h"
/**
 * _isupper - uppercase letters
 * @c: character in question
 * Return: 1 on true success and 0 when not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
