#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024
#define ERROR_WRITE "Error: Can't write to "
#define ERROR_READ "Error: Can't read from file "
#define ERROR_CLOSE "Error: Can't close fd "
#define USAGE_MSG "Usage: cp file_from file_to\n"
#define EXIT_CODE_USAGE 97
#define EXIT_CODE_READ 98
#define EXIT_CODE_WRITE 99
#define EXIT_CODE_CLOSE 100

/**
 * _strlen - Calculates the length of a string.
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    return (length);
}

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to write.
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

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
        write(STDERR_FILENO, ERROR_WRITE, _strlen(ERROR_WRITE));
        write(STDERR_FILENO, file, _strlen(file));
        write(STDERR_FILENO, "\n", 1);
        exit(EXIT_CODE_WRITE);
    }

    return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
    int c;

    c = close(fd);

    if (c == -1)
    {
        write(STDERR_FILENO, ERROR_CLOSE, _strlen(ERROR_CLOSE));
        _putchar(fd + '0');
        write(STDERR_FILENO, "\n", 1);
        exit(EXIT_CODE_CLOSE);
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
    int from, to, r, w;
    char *buffer;

    if (argc != 3)
    {
        write(STDERR_FILENO, USAGE_MSG, _strlen(USAGE_MSG));
        exit(EXIT_CODE_USAGE);
    }

    buffer = allocate_buffer(argv[2]);
    from = open(argv[1], O_RDONLY);
    if (from == -1)
    {
        write(STDERR_FILENO, ERROR_READ, _strlen(ERROR_READ));
        write(STDERR_FILENO, argv[1], _strlen(argv[1]));
        write(STDERR_FILENO, "\n", 1);
        free(buffer);
        exit(EXIT_CODE_READ);
    }
    to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (to == -1)
    {
        write(STDERR_FILENO, ERROR_WRITE, _strlen(ERROR_WRITE));
        write(STDERR_FILENO, argv[2], _strlen(argv[2]));
        write(STDERR_FILENO, "\n", 1);
        free(buffer);
        close_file(from);
        exit(EXIT_CODE_WRITE);
    }

    while ((r = read(from, buffer, BUF_SIZE)) > 0)
    {
        w = write(to, buffer, r);
        if (w == -1)
        {
            write(STDERR_FILENO, ERROR_WRITE, _strlen(ERROR_WRITE));
            write(STDERR_FILENO, argv[2], _strlen(argv[2]));
            write(STDERR_FILENO, "\n", 1);
            free(buffer);
            close_file(from);
            close_file(to);
            exit(EXIT_CODE_WRITE);
        }
    }

    if (r == -1)
    {
        write(STDERR_FILENO, ERROR_READ, _strlen(ERROR_READ));
        write(STDERR_FILENO, argv[1], _strlen(argv[1]));
        write(STDERR_FILENO, "\n", 1);
        free(buffer);
        close_file(from);
        close_file(to);
        exit(EXIT_CODE_READ);
    }

    free(buffer);
    close_file(from);
    close_file(to);

    return (0);
}
