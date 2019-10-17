#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - Entry point
 * @s1: pointer of char
 * @s2: pointer of char
 * @n: number for malloc size
 * Description: concatenates two strings)?
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size, i, j, length1, length2;

	if(s1 == NULL)
	{
		s1 = "";
	}

	if(s2 == NULL)
	{
		s2 = "";
	}

	length1 = _strlen(s1);
	length2 = _strlen(s2);

	if (n >= length2)
	{
		n = length2;
	}

	size = length1 + n;

	str = malloc((sizeof(char) * (size + 1)));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		str[i + j] = s2[j];
	}

	str[i + j] = '\0';

	return (str);

}

/**
 * _strlen - Entry point
 * @s: pointer to char
 * Description: gets length of passed in string)?
 * Return: unsigned integer of length s
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);
}
