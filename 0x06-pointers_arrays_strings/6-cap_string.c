#include "holberton.h"

/**
 * *cap_string - Entry point
 * @s: value of char
 * Description: returns capitalized string)?
 * Return: string
 */

char *cap_string(char *s)
{
	int i, j, counter;

	i = counter = 0;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		if (counter == 0)
		{
			if (s[j] >= 'a' && s[j] <= 'z')
				s[j] = s[j] - 32;
			else
				counter++;
		}

		if (s[j] == '!' || s[j] == '"' || s[j] == '(' || s[j] == ')')
			counter = 0;
		else if (s[j] == ',' || s[j] == '.' || s[j] == '{' || s[j] == '}')
			counter = 0;
		else if (s[j] == ';' || s[j] == '?' || s[j] == '\n')
			counter = 0;
		else if (s[j] == '\t')
			counter = 0;
		else if (s[j] == ' ')
			counter = 0;
		else
			counter++;
	}


	return (s);
}
