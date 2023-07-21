#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - print string
 * @separator: string to print b/w strings
 * @n: n of integers passed
 * @...: variable n of parameter to calculate sum of
 *
 */
void print_string(const char *separator, const unsigned int n, ...)
{
			va_list strings;
		char *str;
			unsigned int index;

			va_start(strings, n);

			for (index = 0; index < n; index++)
		{
			str = va_arg(strings, char*);

				if (str == NULL)
					printf("(nil)");
			else
					printf("%s", str);

				if (index != (n - 1) && separator != NULL)
					printf("%s", separator);
		}

		printf("\n");

			va_end(strings);

}
