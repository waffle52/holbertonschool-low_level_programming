#include "holberton.h"

/**
 * _isdigit - Entry point
 * @c: value of int
 * Description: return 0 or 1?
 * Return: 0 or 1
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 10)
{
	return (1);
}
else
{
	return (0);
}
}