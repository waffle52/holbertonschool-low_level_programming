#include "holberton.h"

/**
 * puts2 - Entry point
 * @str: value of character
 * Description: prints number and skips)?
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str) - 1; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

/**
 * _strlen - Entry point
 * @s: value of char
 * Description: return string length)?
 * Return: string length
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
