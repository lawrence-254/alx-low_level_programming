#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -  a program that multiplies two numbers.
 * @argc: number of characters
 * @argv: value of characters
 * Return: 0 on succes or 1 on not success
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a *b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
