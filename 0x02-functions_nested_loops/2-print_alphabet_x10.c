#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints A to Z times ten)?
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{

int num;
int num2;
for (num = 0; num < 10; num++)
{

for (num2 = 97; num2 < 123; num2++)
{
_putchar(num2);
}
_putchar('\n');
}

}
