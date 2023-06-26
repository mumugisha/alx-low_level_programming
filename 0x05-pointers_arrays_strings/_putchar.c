#include <unistd.h>
/**
 * _putchar - write a character c to stdout
 * @c: Printed character
 *
 * Return: 1 on success
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
