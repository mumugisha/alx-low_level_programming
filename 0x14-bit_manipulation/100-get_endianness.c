#include "main.h"

/**
 * get_endianness - check if machine is small or big
 * Return: 0 if big, & 1 is small
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
