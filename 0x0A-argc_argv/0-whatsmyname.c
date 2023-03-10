#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the programme
 * @argv: value of the arguments
 * @argc: number of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
