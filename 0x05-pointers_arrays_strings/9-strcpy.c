#include "holberton.h"

/**
 * *_strcpy - Entry point
 * @dest: value of character
 * @src: value of character
 * Description: copies string)?
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; k <= _strlen(src); k++)
	{
		dest[k] = src[k];
	}

	return (dest);
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
