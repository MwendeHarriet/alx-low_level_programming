#include <stdlib.h>
#include "main.h"

/**
 * create_file -creates file
 * @filename: filename pointer
 * @text_content: string trminated by NULL
 * Return: return 1 on success or
 * -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fildes, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fildes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fildes, text_content, length);

	if (fildes == -1 || w == -1)
		return (-1);

	close(fildes);

	return (1);
}
