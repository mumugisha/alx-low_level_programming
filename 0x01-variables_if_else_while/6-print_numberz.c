#include <stdio.h>

/**
 * main - print all single digit numbers of base 10
 * starting from 0
 * followed by a new line using putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 20; n < 28; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
