#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - Entry point
 * @min: integer of min value
 * @max: integer of max value
 * Description: creates an array of integers)?
 * Return: pointer to int array
 */

int *array_range(int min, int max)
{
	int *str;
	int i;
	int count;

	if (min > max)
	{
		return (NULL);
	}

	count = max - min + 1;

	str = malloc(sizeof(int) * count);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; min < max + 1; i++, min++)
	{
		str[i] = min;
	}

	return (str);
}
