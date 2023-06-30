#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * @s: pointer to string
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
		int a,
		int b;
		char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == data1[b])
			{
				s[a] = datarot[b];
				break;
					}
			}
		}

		return (s);
}
