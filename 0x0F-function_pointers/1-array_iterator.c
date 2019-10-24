#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - Entry Point
 * @array: array of functions to call
 * @size: the size of the array
 * @action: a pointer to the function needed to be used
 * Description: calls each function with value in array)?
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
