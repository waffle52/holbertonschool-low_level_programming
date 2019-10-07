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

        while(*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (((void *)0));
	}
}
