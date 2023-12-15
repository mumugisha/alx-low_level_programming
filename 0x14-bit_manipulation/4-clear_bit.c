#include "main.h"

/**
 * clear_bit - set value to bit 0
 * @n: pointer to num
 * @index: index of cleared bit
 *
 * Return: success (1), -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
