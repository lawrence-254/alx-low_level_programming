#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - looking for positive or negative
 *
 * Return: 0 (if no error)
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
