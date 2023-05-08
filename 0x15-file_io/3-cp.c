#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *allocate_mem(char *file);
void close_file(int fd);
/**
 * allocate_mem - allocates memory to programm
 * @file: document in qustion
 * Return: pointer to the memory
 */
char *allocate_mem(char *file)
{
	char *mem;

	mem = malloc(sizeof(char) * 1024);
	if (mem == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (mem);
}
/**
 * close_file - closes a file
 * @fd: file in question
 */
void close_file(int fd)
{
	int cf = close(fd);

	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - entry to a program that copies the content of a file to another file
 * @argc: size of arguments
 * @argv: value of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *mem;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	mem = allocate_mem(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, mem, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n",
					argv[1]);
			free(mem);
			exit(98);
		}
		w = write(to, mem, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n",
					argv[2]);
			free(mem);
			exit(99);
		}
		r = read(from, mem, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(mem);
	close_file(from);
	close_file(to);
	return (0);
}
