#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: number of letters or 0 when there is an error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *mem;

	fd = open(filename, O_RDONLY);
	if (fd === -1)
		return (0);
	mem = malloc(sizeof(char) * letters);
	r = read(fd, mem, letters);
	w = write(STDOUT_FILENO, mem, r);

	return (w);
	free(mem);
	close(fd);
}
