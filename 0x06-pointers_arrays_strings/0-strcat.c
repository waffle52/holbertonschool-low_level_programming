#include "holberton.h"
#include <stdio.h> /* delete l8er */

/**
 * *_strcat - Entry point
 * @dest: value of char
 * @src: value of char
 * Description: sets pointer to dest)?
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
	{

	}

	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}

		dest[i] = '\0';

	return (dest);
}
