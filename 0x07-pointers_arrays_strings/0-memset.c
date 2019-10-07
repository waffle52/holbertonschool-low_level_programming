#include "holberton.h"

/**
 * *_memset - Entry point
 * @s: pointer of char
 * @b: value of char
 * @n: unsigned int
 * Description: fills memory and shares location)?
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
	s[i] = '\0';

	return (s);
}
