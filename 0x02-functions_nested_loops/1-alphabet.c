#include "holberton.h"

/**
 * print_alphabet - Entry point
 * Description: prints a to z)?
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
int num = 97;
while (num < 123)
{
_putchar(num);
num++;
}
_putchar('\n');
}
