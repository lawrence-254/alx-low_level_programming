#include <stdio.h>
/**
 * main - the gateway to the code
 *
 * Return: 0 (shows success)
 */
int main(void)
{
	char a;
	char b;

	a = 'a';

	b = 'A';
	while (a <= 'z')
	{
	putchar(a);
a++;
	}
while (b <= 'a')
{
putchar(b);
b++;
}
return (0);
}
