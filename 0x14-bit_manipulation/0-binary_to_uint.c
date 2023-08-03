#include "main.h"

/**
 * binary_to_uint - binary n converted to unsigned int
 * @b: string contain binary n
 *
 * Return: n converted
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dec_val = 0;

	if (!b)
		return (0);
	for (a = 0; b[a];
	a++)
	{
		if (b[a] < '0' || b[a] > '1')
				return (0);
		dec_val = 2 * dec_val + (b[a] - '0');
	}

	return (dec_val);
}
