#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * @n: value of character
 * Description: loop to 98 from n)?
 * Return: output from n to 98
 */

void print_to_98(int n)
{
int i;

if (n < 98)
{
for (i = n; i < 99; i++)
{
printf("%i", i);
if (i != 98)
{
printf(", ");
}
}
printf("\n");

}
else
{
for (i = n; i > 97; i--)
{
printf("%i", i);
if (i != 98)
{
printf(", ");
}
}
printf("\n");
}

}
