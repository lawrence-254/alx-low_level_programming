#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of random variable n
 * n is assigned a random number
 * Return: 0(when successfull)
 */
int main(void)
{
	int n, last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_num = n % 10;

	if (last_num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	}
	else if (last_num < 6 && last_num != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
	}
	else if (last_num == 0)
	{
		printf("Last digit of %d is %d\n", n, last_num);
	}
	return (0);
}
