#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints all arguments it receives
 * @argv: value of characters
 * @argc: number of characters
 * Return: 0 when succesfull
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
