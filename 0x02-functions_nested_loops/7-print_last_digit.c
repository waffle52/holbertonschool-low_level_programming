#include "holberton.h"

/**
 * print_last_digit - Entry point
 * @c: value of character
 * Description: return value of last digit)?
 * Return: value of last digit
 */

int print_last_digit(int c)
{
int mask = c >> (sizeof(int) * 8 - 1);
unsigned int h = (c + mask) ^ mask;

_putchar((h % 10) + '0');

return (h % 10);
}
