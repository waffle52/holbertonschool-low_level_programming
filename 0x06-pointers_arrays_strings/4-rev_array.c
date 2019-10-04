#include "holberton.h"

/**
 * reverse_array - Entry point
 * @a: value of integer
 * @n: value of integer
 * Description: reverses array contents)?
 */

void reverse_array(int *a, int n)
{
	int  c, d, b[100];

	for (c = n - 1, d = 0; c >= 0; c--, d++)
		b[d] = a[c];

	for (c = 0; c < n; c++)
		a[c] = b[c];
}
