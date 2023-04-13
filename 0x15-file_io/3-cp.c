#include <stdio.h>
#include "main.h"
#include <stdlib.h>
char *mem(char *file);
void xit(int fi);
/**
 * mem - allocates 1024 bytes for a memory buffer
 * @file: pointer to buffer storing memories for
 * Return: pointer to the allocated memory
 */
char *mem(char *file)
{
	char *p_mem;

	p_mem = malloc(sizeof(char) * 1024);
	if (p_mem == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (p_mem);
}
/**
 * xit - closes file info
 * @fi: file info in question
 */
void xit(int fi)
{
	int x = close(fi);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fi);
		exit(100);
	}
}
/**
 * main - entry point & Copies the contents of a file to another file.
 * @argc: The number of arguments
 * @argv:pointers to the arguments.
 * Return: 0 on success.
 *	exit code 97 - incorrect count
 *	exit code 98 - does not exist or cannot be read
 *	exit code 99 - cannot be created or written to
 *	exit code 100 - cannot be closed
 */
int main(int argc, char *argv[])
{
	int r, w, src;
	char *p_mem;
	int to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	p_mem = mem(argv[2]);
	src = open(argv[1], O_RDONLY);
	r = read(src, p_mem, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w = write(to, p_mem, r);
	if (r > 0)
	{
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(p_mem);
			exit(98);
		}

		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(p_mem);
			exit(99);
		}
		r = read(src, p_mem, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(p_mem);
	xit(src);
	xit(to);
	return (0);
}
