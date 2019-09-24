#include "holberton.h"

/**
 * _islower - Entry point
 * @c: value of character
 * Description: return lower or uppercase)?
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
