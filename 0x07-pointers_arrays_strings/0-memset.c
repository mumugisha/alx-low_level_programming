#include "main.h"

/**
 * _memset - function that fills
 * memory with a constant byte
 * @s: address of memory to be filled
 * @b: desired outcome
 * @n: number of byte
 * Return: the array with a value n changed
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s(a) = b;
		n--;
	}
	return (s);
}
