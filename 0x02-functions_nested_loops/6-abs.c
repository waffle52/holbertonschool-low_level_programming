#include "holberton.h"
/**
 * _abs - Entry point
 * @c: value of character
 * Description: return absolute value)?
 */

int _abs(int c)
{
int mask = c >> (sizeof(int) * 8 - 1);
return ((c + mask) ^ mask);
}
