#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * num_check - checks for digits
 * @str: string in question
 * Return: 0 when successfull
 */
int num_check(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - entry point
 * @argc: number of characters
 * @argv: value of arguments
 * Return: 0when successfull
 */
int main(int argc, char *argv[])
{
	int i, str_to_i, sum = 0;

	i = 1;
	while (i < argc)
	{
		if (num_check(argv[i]))
		{
			str_to_i = atoi(argv[i]);
			sum += str_to_i;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
