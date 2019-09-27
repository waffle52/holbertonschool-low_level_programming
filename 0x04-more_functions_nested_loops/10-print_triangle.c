#include "holberton.h"

/**
 * print_triangle - Entry point
 * @size: value of integer
 * Description: print triangle based of size)?
 */

void print_triangle(int size)
{
	int i;
	int j;
	int m;
if (size > 0)
{

for (i = 1; i <= size; i++)
{

for (j = 0; j < (size - i); j++)
{
_putchar(' ');

}


for (m = 0; m < i; m++)
{
_putchar('#');
}
_putchar('\n');

}




}
else
{
_putchar('\n');
}
}
