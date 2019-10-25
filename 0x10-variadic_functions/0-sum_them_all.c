#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Entry Point
 * @n: arguments of type unsigned int
 * Description: gets the sum of all parameters passed into function)?
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum;
	unsigned int i;

	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}
