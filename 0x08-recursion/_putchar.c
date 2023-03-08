#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: the character in question
 * Return: 1 when successfull, -1 when unsuccessfull
 */
int _putchar(char c){
	return (write(1, &c, 1));
}
