#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator: string to print b/w numbers
 * @n: n of integers passed
 * @...: variable n of parameter to calculate sum of
 *
 */
void print_numbers(const char *separator, unsigned int n, ...)
{
				va_list nums;
				unsigned int index;

				va_start(nums, n);

			for (index = 0; index < n; index++)
		{
			printf("%d", va_arg(nums, int));

				if (index != (n - 1) && separator != NULL)
					printf("%s", separator);
		}

		printf("\n");

			va_end(nums);

}
