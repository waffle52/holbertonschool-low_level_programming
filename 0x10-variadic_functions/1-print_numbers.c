#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Entry Point
 * @separator: char separator
 * @n: arguments of type unsigned int
 * Description: prints all number followed by a new line)?
 */

void print_numbers(const char *separator, const unsigned int n, ...)
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
		printf("%i", va_arg(valist, int));
		if (i != n - 1)
		{
			printf("%s", separator); /* seperator */
		}
	}
	printf("\n");

	va_end(valist);
}
