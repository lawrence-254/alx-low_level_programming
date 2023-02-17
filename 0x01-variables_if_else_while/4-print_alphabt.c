#include<stdio.h>
/**
 * main - provides gate to the code
 *
 * Return: 0 (verifies corresctness)
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
