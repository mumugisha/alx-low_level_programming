#include "main.h"
#include <stdio.h>

/**
 * print_array - Print elements of an array.
 * @a: Array to print.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
		int i;

		for (i = 0; i < n; i++)
		{
			printf("%d, ", a[i]);
		}

	if (i == (n - 1))
		{
		printf("%d", a[i]);
		}

		putchar('\n');
}
