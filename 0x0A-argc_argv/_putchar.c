#include <unistd.>
/**
 * _putchar - writes the character to c terminal
 * @c: the character in question
 * Return: 1 on success and 0 on error
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
