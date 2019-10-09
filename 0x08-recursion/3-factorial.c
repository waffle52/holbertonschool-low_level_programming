#include "holberton.h"

/**
 * factorial - Entry point
 * @n: value of integer
 * Description: returns factorial of n)?
 * Return: Integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
