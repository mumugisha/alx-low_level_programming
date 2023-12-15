#include "main.h"

/**
 * flip_bits - count numb bit to change
 * @n: 1st n
 * @m: 2nd n
 *
 * Return: n bit to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int executive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = executive >> a;
		if (current & 1)
			count++;
	}

	return (count);
}
