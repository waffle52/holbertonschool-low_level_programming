#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Entry Point
 * @array: pointer to first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for in array
 * Description: searches for a value in an array using Linear search)?
 * Return: first index where num is located
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
