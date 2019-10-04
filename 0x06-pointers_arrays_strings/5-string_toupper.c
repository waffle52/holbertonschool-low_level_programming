#include "holberton.h"

/**
 * *string_toupper - Entry point
 * @s: value of char
 * Description: change char to uppercase)?
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] >= 'a' && s[c] <= 'z')
		{
			s[c] = s[c] - 32;
		}
		c++;
	}


	return (s);
}
