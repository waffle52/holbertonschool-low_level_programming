#include "holberton.h"

/**
 * puts_half - Entry point
 * @str: value of character
 * Description: prints half of a string)?
 */

void puts_half(char *str)
{
	int i;
	for (i = _strlen(str) / 2; i <= _strlen(str) - 1; i++)
	{
		_putchar(str[i]);
	}

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
