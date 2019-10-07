#include "holberton.h"

/**
 * *_strchr - Entry point
 * @s: pointer of char
 * @c: char
 * Description: locates a char in a string)?
 * Return: pointer of char
 */

char *_strchr(char *s, char c)
{
	int i;

	for(i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}

	}

	return ('\0');
}
