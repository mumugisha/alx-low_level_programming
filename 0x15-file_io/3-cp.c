#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * allocate_buffer - Allocates 1024 bytes for a buffer.
 * @file: Name of the file for error messages.
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

    return buffer;
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
    int close_status;

    close_status = close(fd);
    if (close_status == -1)
    {
        write(STDERR_FILENO, "Error: Can't close fd ", 22);
        _putchar(fd + '0');
        write(STDERR_FILENO, "\n", 1);
        exit(100);
    }
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: Number of arguments supplied to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, read_status, write_status;
    char *buffer;

    if (argc != 3)
    {
        write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
        exit(97);
    }

    buffer = allocate_buffer(argv[2]);
    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        write(STDERR_FILENO, "Error: Can't read from file ", 28);
        write(STDERR_FILENO, argv[1], _strlen(argv[1]));
        write(STDERR_FILENO, "\n", 1);
        free(buffer);
        exit(98);
    }

    file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (file_to == -1)
    {
        write(STDERR_FILENO, "Error: Can't write to ", 22);
        write(STDERR_FILENO, argv[2], _strlen(argv[2]));
        write(STDERR_FILENO, "\n", 1);
        free(buffer);
        close(file_from);
        exit(99);
    }

    while ((read_status = read(file_from, buffer, BUF_SIZE)) > 0)
    {
        write_status = write(file_to, buffer, read_status);
        if (write_status == -1)
        {
            write(STDERR_FILENO, "Error: Can't write to ", 22);
            write(STDERR_FILENO, argv[2], _strlen(argv[2]));
            write(STDERR_FILENO, "\n", 1);
            free(buffer);
            close(file_from);
            close(file_to);
            exit(99);
        }
    }

    if (read_status == -1)
    {
        write(STDERR_FILENO, "Error: Can't read from file ", 28);
        write(STDERR_FILENO, argv[1], _strlen(argv[1]));
        write(STDERR_FILENO, "\n", 1);
        free(buffer);
        close(file_from);
        close(file_to);
        exit(98);
    }

    free(buffer);
    close_file(file_from);
    close_file(file_to);
    return 0;
}
