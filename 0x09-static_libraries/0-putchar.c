#include <unistd.h>

/**
 * _putchar - write a character c to stdout
 * @c: character to print
 *
 * return: 1 Success
 * -1 on error, and errno is set appropriately
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
