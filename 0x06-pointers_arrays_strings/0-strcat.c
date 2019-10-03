#include "holberton.h"

/**
 * *_strcat - Entry point
 * @dest: value of char
 * @src: value of char
 * Description: sets pointer to dest)?
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	while(*dest)
		dest++;

	while(*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';


	return (dest);
}
