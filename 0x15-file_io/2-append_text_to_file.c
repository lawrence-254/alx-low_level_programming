#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: pointer to the name of the file.
 * @text_content: string to append
 * Return: 1 on success and -1 on failure
 *	or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (text_content ==  NULL)
	{
		text_content = "";
	}
	else
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if ((filename == NULL) || (op == -1 || wr == -1))
		return (-1);
	close(op);
	return (1);
}
