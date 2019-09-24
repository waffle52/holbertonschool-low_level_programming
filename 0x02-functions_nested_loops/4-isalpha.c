#include "holberton.h"

/**
 * _isalpha - Entry point
 * @c: value of character
 * Description: return letter)?
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
