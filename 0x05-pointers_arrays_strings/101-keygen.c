#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - a program that generates random valid passwords
 * for the program 101-crackme
 * Return: 0 when succesfull
 */
int main(void)
{
	int i, n, add, pass[100];

	add = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		add += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - add) - '0' < 78)
		{
			n = 2772 - add - '0';
			add += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
