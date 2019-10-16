#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - Entry point
 * @str: pointer of char
 * Description: duplicates a string given)?
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	if (str == '\0')
	{
		return ('\0');
	}
	else
	{

	int n;
	int i;
	char *str2;

	n = 0;

	while (str[n] != '\0')
	{
		n++;
	}

	str2 = malloc(sizeof(char) * n + 1);

	if (str2 == '\0')
	{
		return ('\0');
	}

	for (i = 0; i < n; i++)
	{
		str2[i] = str[i];
	}


	return (str2);
	}
}
