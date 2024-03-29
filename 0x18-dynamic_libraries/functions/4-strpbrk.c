#include "main.h"

/**
 * _strpbrk - function that searches a
 * string for any of a set of bytes
 * @s: input
 * @accept: input
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int a;

		while (*s)
	{

		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			return (s);
			}
			s++;
	}
	return ('\0');
}
