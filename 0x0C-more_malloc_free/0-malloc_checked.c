#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - Entry point
 * @b: unsigned int for size of memory
 * Description: uses b to allocate memory)?
 * Return: pointer to memory allocation
 */

void *malloc_checked(unsigned int b)
{

	char *str2;

	str2 = malloc(b);

	if (str2 == NULL)
	{
		exit(98);
	}

	return (str2);
}
