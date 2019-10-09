#include "holberton.h"

/**
 * _pow_recursion - Entry point
 * @x: value of integer
 * @y: value of integer
 * Description: gets value of x to the power of y)?
 * Return: x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}

	return (x);
}
