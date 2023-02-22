#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all whole numbers upto 98
 * @n: number initialiser ie used to reprented numbers
 * Return: 0 when the code is executed successfully
 */
void print_to_98(int n)

{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
