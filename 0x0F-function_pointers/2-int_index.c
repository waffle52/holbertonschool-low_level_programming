#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Entry Point
 * @array:array of integer values
 * @size: number of elements in array
 * @cmp: pointer to function to compare values
 * Description: gets index of first element matching to cmp function)?
 * Return: the index of the first element.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	

	for (i = 0; i < size; i++)
	{
		if ((cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
	i = -1;

	return (i);

}
