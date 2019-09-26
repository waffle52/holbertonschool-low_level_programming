#include "holberton.h"

/**
 * print_diagonal - Entry point
 * @n: value of integer
 * Description: prints slashes based of n)?
 */

void print_diagonal(int n)
{
int i;
int j;

if (n > 0)
{
for (i = 0; i < n; i++)
{
	for (j = 0; j < i; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
}
else
{
	_putchar('\n');
}
}
