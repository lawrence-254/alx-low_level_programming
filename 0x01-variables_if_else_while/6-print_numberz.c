#include <stdio.h>
/**
 * main - c entry point
 *
 * Return: 0 validarion line
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
