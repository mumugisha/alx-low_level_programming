#include <stdio.h>

/**
 * main - print the alphabet in lowercase and uppercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alph_lowercase[26] = "abcdefghijklmnopqrstuvwxyz";
	char alph_uppercase[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph_lowercase[i]);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(alph_uppercase[i]);
	}

	putchar('\n');

	return (0);
}
