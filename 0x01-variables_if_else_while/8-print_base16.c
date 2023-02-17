#include <stdio.h>
/**
 * main - c gateway point
 *
 * Return: 0 validates
 */
int main(void)
{
	char i;

	int j;

	i = 'a';

	j = 0;
	while (j < 10)
	{
		putchar(j + '0');
		j++;
	}
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
