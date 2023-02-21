#include <unistd.h>
/**
 * _putchar - returns function
 * @c: what is printed
 * Return: 1 when successfull
 * -1 when not successfull
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
