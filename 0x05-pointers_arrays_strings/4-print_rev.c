#include "holberton.h"

/**
 * print_rev - Entry point
 * @s: value of character
 * Description: prints string in reverse)?
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

/**
 * _strlen - Entry point
 * @s: value of character
 * Description: return length of string)?
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);
}
