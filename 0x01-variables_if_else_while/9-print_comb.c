#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - c gateway
 *
 * return 0 c validation
 */
int main(void)
{
	int i;
	for (i = '0'; i < '9'; i++)
	{
		putchar(i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
