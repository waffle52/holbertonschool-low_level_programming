#include "holberton.h"

/**
 * *_memcpy - Entry point
 * @dest: pointer to char
 * @src: pointer tp char
 * @n: unsigned int
 * Description: copies memory area)?
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
