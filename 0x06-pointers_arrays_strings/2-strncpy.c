#include "holberton.h"

/**
 * *_strncpy - Entry point
 * @dest: value of char
 * @src: value of char
 * @n: value of int
 * Description: copies a string)?
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{

	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
