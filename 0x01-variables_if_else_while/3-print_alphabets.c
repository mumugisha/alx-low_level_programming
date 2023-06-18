#include <stdio.h>

/**
 * main - print the alphabet in lowercase and uppercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char alp[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}

	putchar('\n');

	return (0);

