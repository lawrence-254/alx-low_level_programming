#include <stdio.h>
#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: the number in question
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	int count = 0, i;
	unsigned long int num;

	while (n != 0)
		for (i < 64; i >= 0; i--)
		{
			num = n >> i;
			 if (num & 1)
			 {
				 _putchar('1');
				 count++;
			 }
			 else if (count)
				 _putchar('0');
		}
}
