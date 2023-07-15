#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert string ton integer
 * @s: string to convert
 *
 * Return: int converted to string
 *
 */
int _atoi(char *s)
{
		int i, d, n, len, f, digit;

		i = 0;
		d = 0;
		n = 0;
		len = 0;
		f = 0;
		digit = 0;


			while (s[len] != '\0')
				len++;

			while (i < len && f == 0)
		{
					if (s[i] == '-')
						++d;

			if (s[i] >= '0' && s[i] <= '9')
			{
				digit = -digit;

			n = n * 10 + digit;
			f = 1;
					if (s[i + 1] < '0' || s[i + 1] > '9')
						break;

			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: n arguments
 * @argv: array of arguments
 *
 * Return: 0 (success), 1 (Error)
 *
 */
int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
