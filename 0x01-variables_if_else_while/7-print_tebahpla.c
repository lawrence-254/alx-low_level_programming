#include <stdio.h>
/**
 * main - the gate to c
 *
 * Return: 0 c validation
 */
int main(void)
{
	char i;

	i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
