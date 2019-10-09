#include "holberton.h"

/**
 * _print_rev_recursion - Entry point
 * @s: pointer of char
 * Description: prints string in reverse)?
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
