#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints the number of arguments passed into it.
 * @argv: value of arguments
 * @argc: number of arguments
 * Return: 0 on succes
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);

	return (0);
}
