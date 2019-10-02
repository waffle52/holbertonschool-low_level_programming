#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: value of character
 * @n: value of int
 * Description: print array)?
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
		printf("%i", a[i]);
		}
		else
		{
			printf("%i, ", a[i]);
		}
	}
	printf("\n");
}
