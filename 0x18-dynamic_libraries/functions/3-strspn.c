#include "main.h"

/**
 * _strspn - entry
 * @s: input
 * @accept: input
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
		unsigned int n = 0;
	int b;

		while (*s)
	{

		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				n++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
