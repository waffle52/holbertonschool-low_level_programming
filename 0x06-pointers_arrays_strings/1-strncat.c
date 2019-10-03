#include "holberton.h"

/**
 * *_strncat - Entry point
 * @dest: value of char
 * @src: value of char
 * @n: value of int
 * Description: adds two strings)?
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
	{

	}

	for (j = 0; j < n && src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
