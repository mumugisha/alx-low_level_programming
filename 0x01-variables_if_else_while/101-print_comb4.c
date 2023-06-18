#include <stdio.h>

/**
 * main - prints all possible different combinations of three-digit numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n <= 55; n++)
	{
		for (m = n + 1; m <= 56; m++)
		{
			for (l = m + 1; l <= 57; l++)
			{
				putchar(n);
				putchar(m);
				putchar(l);

				if (n != 55 || m != 56 || l != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
