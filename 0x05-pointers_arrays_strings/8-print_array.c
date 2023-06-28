#include "main.h"
#include <stdio.h>

/**
 * print_array - Print elements of an array
 * @a: Array name
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
		int i;

		for (i = 0; i < (n - 1); i++)
		{
			printf("%d, ", a[i]);
		}

	if (i == (n - 1))
		{
		printf("%d", a[n - 1]);
		}

		putchar("\n");
}
