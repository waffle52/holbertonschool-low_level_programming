#include "holberton.h"

/**
 * _isupper - Entry point
 * @c: value of character
 * Description: return 0 or 1)?
 * Return: Always 0 or 1 (Success)
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
	return (1);
}
else
{
	return (0);
}
}
