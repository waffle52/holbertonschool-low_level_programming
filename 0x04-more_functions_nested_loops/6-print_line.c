#include "holberton.h"

/**
 * print_line - Entry point
 * @n: value of integer
 * Description: draws a line in terminal)?
 */

void print_line(int n)
{
	int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
	_putchar('_');
}
}
_putchar('\n');

}
