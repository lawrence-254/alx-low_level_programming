#include "main.h"
#include <stdio.h>
/**
 * _puts - puts.c
 * Return:  0 (when nocode)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
