#include "main.h"
#include <stdio.h>

/**
 * main - print number 1 to 100, followed
 * a new line, for multiple of 3 print Fizz
 * and for multiple of 5 print Buzz, for
 * multiple of both print FizzBuzz
 *
 * Return: Always 0 (success)
 */
int main(void)
{
		int a;

		for (a = 1; a <= 100; a++)
			{
			if (a % 3 == 0 && a % 5 != 0)
				printf("Fizz")
			} else if (a % 5 == 0 && a % 3 != 0)
		{
				printf("Buzz")
	} else if (a % 3 == 0 && a % 5 == 0)
	{
		printf("FizzBuzz");
	} else if (a == 1)
	{
		printf("%d", a);
	} else
	{
		printf(" %d", a);
	}
	printf("\n");

	return (0);
}
