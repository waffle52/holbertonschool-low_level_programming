#include "holberton.h"

/**
 * *leet - Entry point
 * @s: value of char
 * Description: encodes a string)?
 * Return: encoded string
 */

char *leet(char *s)
{

	char *let = "aAeEoOtTlL";
	char *num = "4433007711";

	int i = 0;
	int j = 0;

	while (s[i])
	{
		for (j = 0; let[j]; j++)
		{
			if (let[j] == s[i])
			{
				s[i] = num[j];
			}
		}
		i++;
	}
	return (s);
}
