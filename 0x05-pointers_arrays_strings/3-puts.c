#include "holberton.h"

/**
 * _puts - Entry point
 * @str: value of char
 * Description: prints a string)?
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
