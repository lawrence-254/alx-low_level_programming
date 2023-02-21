#include "main.h"
/**
 * _isalpha - checks for capital letters
 * @c: character to be checked
 * Return: 1 if character is capital
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <=90) || (c >= 97 && c<= 122))
	{
		return (1);
	}
	return (0);
}
