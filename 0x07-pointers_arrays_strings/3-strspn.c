#include "holberton.h"

/**
 * _strspn - Entry point
 * @s: pointer of char
 * @accept: pointer of char
 * Description: returns number of bytes in char s)?
 * Return: unsigned integer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter;
	int i;
	int j;

	for (i = 0; s[i] != ','; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
			}


		}
	}


	return (counter);
}
