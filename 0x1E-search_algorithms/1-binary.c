#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Entry Point
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: value to search for in array
 * Description: Searches for value in array using Binary Search)?
 * Return: index of first instance of value found in array
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int m = 0;

	if (array == NULL)
		return (-1);

	/*print_list(array, size, 0);*/

	while (left <= right)
	{
		m = ((left + right) / 2);
		print_list(array, right + 1, left);
		if (array[m] < value)
		{
			left = m + 1;
		}
		else if (array[m] > value)
		{
			right = m - 1;
		}
		else if (array[m] == value)
			return (m);
	}

	return (-1);
}

/**
 * print_list - Entry Point
 * @array: pointer to element in array
 * @size: number of elements to print up to inarray
 * @start: start index to loop through array
 * Description: Prints array using commads if not last element)?
 */

void print_list(int *array, size_t size, size_t start)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = start; i < size; i++)
	{
		if (i + 1 != size)
			printf("%i, ", array[i]);
		else
			printf("%i", array[i]);
	}
	printf("\n");
}
