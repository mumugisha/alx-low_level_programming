#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads file and print to the stdout
 * @filename: the file to be read
 * @letters: n of letters to be read out
 * Return: w- actual n of bytes to read and print
 * 0 wheen failed, or NULL for filename
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
