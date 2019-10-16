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
	if(str == NULL)
	{
		return (NULL);
	}
	else
	{

	int n;
	int i;
	char *str2;

	n = 0;

	while(str[n] != '\0')
	{
		n++;
	}

	str2 = malloc(sizeof(char) * n);

	for(i = 0; i < n; i++)
	{
			str2[i] = str[i];
	}

	return (str2);
	}
}
