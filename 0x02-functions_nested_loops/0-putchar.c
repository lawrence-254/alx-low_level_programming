#include <stdio.h>
#include <unistd.h>
/*
 * _putchar - repaces main 
 *
 * Return: 1 shows succes
 */
int _putchar(char i)
{
	i = "Hello from Putchar)"
	return(write(1, &i, 1)) ;
}
