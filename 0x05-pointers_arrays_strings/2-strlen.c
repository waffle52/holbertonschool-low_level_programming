#include "holberton.h"

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
