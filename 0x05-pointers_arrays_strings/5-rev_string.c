#include "holberton.h"

/**
 * rev_string - Entry point
 * @s: value of character
 * Description: reverses a string)?
 */

void rev_string(char *s)
{

	int counter;
	char *endp = s;
	char interim;

	while (*s)
	{
		counter++;
		s++;
	}
	s--;

	counter = counter / 2;

	while (counter > 0)
	{
		interim = *endp;
		*endp = *s;
		*s = interim;

		endp++;
		counter--;
		s--;
	}
}

