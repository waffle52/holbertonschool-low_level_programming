#include <stdio.h>
#include "holberton.h"
#include <string.h>

/**
 * print_binary - Entry Point
 * @n: number given
 * Description: Prints binary representation of a number)?
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);

	printf("%ld", n % 2);
}
