#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - c gateway point
 *
 * Return: 0 validates
 */
int main(void)
{
	char i;

	int j;

	for (j = '0' ; j <= '9' ; j++)
		putchar(j);
	for (i = 'a' ; i <= 'f' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
