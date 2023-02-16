#include <stdio.h>
/**
 * main - prints the size of various types on the computer it compiles on
 * Return: 0 (the program returns when it succeds)
 */
int main(void)
{
	char c;
	int n;
	long int i;
	long long int l;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(n));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
