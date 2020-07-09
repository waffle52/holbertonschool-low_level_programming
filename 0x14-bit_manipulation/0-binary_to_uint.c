#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - entry Point
 * @b: string containing binary number
 * Description: Converts a binary number to an unsigned int)?
 * Return: the total of the binary number
 */

unsigned int binary_to_uint(const char *b)
{
	int total = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		total *= 2;
		if (*b != '1' && *b != '0')
			return (0);
		if (*b++ == '1')
			total += 1;
	}
	return (total);
}
