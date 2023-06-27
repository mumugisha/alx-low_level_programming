#include "main.h"
#include <stdio.h>

/**
 * puts2 - Print every other character of a string.
 * @str: Input string.
 */
void puts2(char *str)
{
int string;

		for (string = 0; str[string] != '\0'; string++)
		{
			if (string % 2 == 0)
			putchar(str[string]);
		}

		putchar('\n');
}
