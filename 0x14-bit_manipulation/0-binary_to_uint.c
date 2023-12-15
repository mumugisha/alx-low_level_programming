#include "main.h"

/**
 * binary_to_uint - binary and converted to unsigned int
 * @b: string contain binary n
 *
 * Return: n converted
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);
			for (i = 0; b[i];
	i++)
	{
			if (b[i] < '0' || b[i] > '1')
				return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
