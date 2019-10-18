#include "holberton.h"
#include <stdlib.h>

/**
 * *_calloc - Entry point
 * @nmemb: unsigned int
 * @size: unsigned int for malloc size
 * Description: reserves memory with malloc)?
 * Return: pointer to reserved memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i;
	char *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	str = malloc(size * (nmemb + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		str[i] = 0;
	}

	str[i + 1] = '\0';
	return (str);
}
