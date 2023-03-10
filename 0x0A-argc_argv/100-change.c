#include <stdio.h>
#include <stdlib.h>
/**
 * main - fuction that prints the minimum number of coins
 * to make change for an amount of money
 * @argv: value of the argument
 * @argc: size of the argument
 * Return: 0 whe successfull
 */
int main(int argc, char *argv[])
{
	int pos, sum, bal, aux, coins[] = {25, 10, 5, 2, 1};

	pos = sum = bal = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]);

	if (sum < 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[pos] != '\0')
	{
		if (sum >= coins[pos])
		{
			aux = (sum / coins[pos]);
			bal += aux;
			sum -= coins[pos] * aux;
		}
		pos++;
	}
	printf("%d\n", bal);
	return (0);
}
