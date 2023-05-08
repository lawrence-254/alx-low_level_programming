#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- a function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: name of the file in question
 * @letters: expected printed output
 * Return: 0 ir expected characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *mem;
	ssize_t fd;
	ssize_t t;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd != -1)
	{
		mem = malloc(sizeof(char) * letters);
		t = read(fd, mem, letters);
		w = write(STDOUT_FILENO, mem, t);
	} else
	{
		return (0);
	}
	free(mem);
	close(fd);
	return (w);
}
