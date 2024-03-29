#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string
 * @str: the string
 * Return: length of the string
 */
void _puts(char *str)
{
		int i = 0;

		while (str[i] != '\0')
		{
			putchar(str[i]);
			i++;
		}
	putchar('\n');
}
