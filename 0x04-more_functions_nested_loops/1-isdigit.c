#include "main.h"
/**
 * __isdigit - check if numbers are 0-9
 * @c: char to be checked
 *
 *Return: 1 if the character is a digit
 * or 0 for any other;
 */
int _isdigit(int c);
{
	if (c >= '1' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
