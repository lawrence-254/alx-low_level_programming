#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of random variable n
 * n is assigned a random number
 * Return: 0(when successfull)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int m;

	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d\n", n, m);
	}
	return (0);
}
