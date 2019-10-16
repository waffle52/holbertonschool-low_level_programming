#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - Entry point
 * @s1: pointer of char
 * @s2: pointer of char
 * Description: concatenates two strings)?
 * Return: new string memory
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int j;
	int size;

	size = 0;

	size = _strlen(s1) + _strlen(s2);


	str = malloc(sizeof(char) * size);

	if(str == NULL)
	{
		return (NULL);
	}

	for(i = 0; i < _strlen(s1); i++)
	{
		str[i] = s1[i];
	}

	for(j = 0; j < _strlen(s2); i++, j++)
	{
		str[i] = s2[j];
	}

/*	str[i + 1] = '\0'; */

	return (str);
}


int _strlen(char *s)
{
	int i = 0;
	if(s != NULL)
	{
	while (*s != '\0')
	{
		s++;
		i++;
	}
	}

	return (i);
}