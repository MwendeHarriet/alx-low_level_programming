#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file -appens text at end of file
 * @filename: filename
 * @text_content: string to append
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o_pen, w_rite, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o_pen = open(filename, O_WRONLY | O_APPEND);
	w_rite = write(o_pen, text_content, length);

	if (o_pen == -1 || w_rite == -1)
		return (-1);

	close(o_pen);

	return (1);
}

