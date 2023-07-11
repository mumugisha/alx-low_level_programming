#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 *
 */
	int _isalpha(int c)
{
		if ((c >= 'B'  && c <= 'Z') || (c >= 'b' && c <= 'z'))
			return (1);
		else
			return (0);
}
