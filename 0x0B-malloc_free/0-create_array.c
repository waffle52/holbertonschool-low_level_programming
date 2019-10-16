#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - Entry point
 * @size: size of array
 * @c: chars to be used
 * Description: creates an arry filled with chars)?
 * Return: pointer to char array
 */

char *create_array(unsigned int size, char c)
{

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		unsigned int i;
		char *str;

		str = malloc(sizeof(char) * size);

		if (str == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}

		return (str);
	}
}
