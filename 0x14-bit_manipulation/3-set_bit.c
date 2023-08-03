#include "main.h"

/**
 * set_bit - set bit to given index
 * @n: pointer to n
 * @index: index of bit set 1
 *
 * Return: Success (1), -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}


