#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program
 * Return: Always 0 (success)
 */
int main(void)
{
		int pass[100];
		int i, sum, n;

		sum = 0;

		srand(time(NULL));

		for (i = 0; i < 100; i++)
		{
			pass[i] = rand() % 52;
			sum += (pass[i] + '0');
			putchar(pass[i] + '0');

				if ((1520 - sum) - '0' < 52)
				{
					n = 1520 - sum - '0';
					sum += n;
					putchar(n + '0');
					break;
				}
		}

		return (0);
}

