#include "main.h"
/**
 * append_text_to_file - adds text at the end of a file
 * @filename: file in question
 * @text_content: text in question
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename != NULL)
	{
		if (text_content != NULL)
		{
			for (len = 0; text_content[len];)
				len++;
		}
		o = open(filename, O_WRONLY | O_APPEND);
		w = write(o, text_content, len);
		if (o == -1 || w == -1)
			return (-1);
		close(o);

		return (1);
	}
	return (-1);
}
