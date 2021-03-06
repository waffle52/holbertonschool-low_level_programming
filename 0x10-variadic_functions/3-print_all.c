#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Entry Point
 * @format: arguments of type char *
 * Description: prints all strings as the value type specified is given)?
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0;
	int counter = 0;

	va_start(valist, format);
	while (format[counter] != '\0')
		counter++;

	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(valist, int));
			break;
		case 'i':
			printf("%i", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(valist, double));
			break;
		case 's':
			if (format != NULL)
			{
				printf("%s", va_arg(valist, char *));
				break;
			}
			printf("(nill)");
			break;
		}
		if (i != counter - 1 && (format[i] == 'c' || format[i] == 'i' ||
					 format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
