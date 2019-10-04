#include "holberton.h"

/**
 * _strcmp - Entry point
 * @s1: value of char
 * @s2: value of char
 * Description: compares two strings)?
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, m;

	i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
			m = s1[i] - s2[i];
		}
		else
		{
			m = s1[i] - s2[i];
			break;
		}
	}

	return (m);
}

/* returns the subtraction of the first different chars */
