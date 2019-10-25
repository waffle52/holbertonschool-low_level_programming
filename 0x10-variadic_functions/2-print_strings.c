#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - Entry Point
 * @separator: separator between strings
 * @n: arguments of type unsigned int
 * Description: prints out strings)?
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	if (separator == NULL || n == 0)
	{
		return;
	}

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(valist, char *));

		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(valist);
}
