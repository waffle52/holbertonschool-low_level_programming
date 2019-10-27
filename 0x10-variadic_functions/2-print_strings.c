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
	char *str;

	if (n == 0)
	{
		return;
	}

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str != NULL)
		{
		printf("%s", str);
		}
		else
		{
			printf("(nill)");
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(valist);
}
