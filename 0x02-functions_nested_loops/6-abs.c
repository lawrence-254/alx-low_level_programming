#include "main.h"
#include <stdio.h>
/**
 * _abs - gets absolute value of integer
 *
 * @c: interger i question
 * Return: absolute value of integer or zero 
 */
int _abs(int c)
{
	if (c < 0)
	{
		int val;

		val = c * -1;
		return (val);
	}
	return (c);
}
