#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * allocate_buffer - Allocates 1024 bytes for a buffer.
 * @file: Name of the file.
 *
 * Return: Pointer to the newly allocated buffer.
 */
char *allocate_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUF_SIZE);

	if (buffer == NULL)
	{
		write(STDERR_FILENO, "Error: Can't write to ", 22);
		write(STDERR_FILENO, file, _strlen(file));
		write(STDERR_FILENO, "\n", 1);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		write(STDERR_FILENO, "Error: Can't close fd ", 22);
		_putchar(fd + '0');
		_putchar('\n');
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of pointers to arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_status, write_status;
	char *buffer;
	int i;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	buffer = allocate_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	read_status = read(file_from, buffer, BUF_SIZE);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || read_status == -1)
		{
			write(STDERR_FILENO, "Error: Can't read from file ", 28);
			i = 0;
			while (argv[1][i] != '\0')
			{
				write(STDERR_FILENO, &argv[1][i], 1);
				i++;
			}
			write(STDERR_FILENO, "\n", 1);
			free(buffer);
			exit(98);
		}

		write_status = write(file_to, buffer, read_status);
		if (file_to == -1 || write_status == -1)
		{
			write(STDERR_FILENO, "Error: Can't write to ", 22);
			i = 0;
			while (argv[2][i] != '\0')
			{
				write(STDERR_FILENO, &argv[2][i], 1);
				i++;
			}
			write(STDERR_FILENO, "\n", 1);
			free(buffer);
			exit(99);
		}

		read_status = read(file_from, buffer, BUF_SIZE);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_status > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
