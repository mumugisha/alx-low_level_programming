#include <unistd.h>
/*
 * putchar - write a character c to stdout
 * @c: the printed character
 *
 * return: on success 1
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return {write(1, &c, 1)};
}
