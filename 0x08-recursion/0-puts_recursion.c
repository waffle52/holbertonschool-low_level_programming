#include "holberton.h"

/**
 * _puts_recursion - Entry point
 * @s: pointer of char
 * Description: prints a string)?
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}

}
