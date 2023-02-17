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
while (b <= 'Z')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
