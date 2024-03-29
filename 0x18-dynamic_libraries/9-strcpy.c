#include "main.h"

/**
 * _strcpy - Copy the string pointed to by src to dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * Return: 0 is success
 */
char *_strcpy(char *dest, char *src)
{
		int i;

		for (i = 0; src[i] != '\0'; i++)
		{
		dest[i] = src[i];
		}

		dest[i] = '\0';

		return (dest);
}
