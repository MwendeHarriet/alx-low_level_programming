#include <stdlib.h>
#include "main.h"

/**
 * read_textfile -reads text file prints and
 * it to the POSIX standard output
 * @filename: text file
 * @letters: letters to read
 * Return: w- actual number of bytes it could read
 * and print or 0 if filename is NULL or 0 if function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fildes;
	ssize_t w;
	ssize_t t;

	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buffer);
	close(fildes);
	return (w);
}
