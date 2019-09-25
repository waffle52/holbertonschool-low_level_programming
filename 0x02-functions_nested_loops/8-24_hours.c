#include "holberton.h"

/**
 * jack_bauer - Entry point
 * Description: gets every number from 00:00 to 23:59)?
 * Return: numbers 00:00 to 23:59
 */

void jack_bauer(void)
{
	int num;
	int num2;

	for (num = 0; num < 24; num++)
{
	for (num2 = 0; num2 < 60; num2++)
{

	if (num < 10)
{
	_putchar('0');
	_putchar((num % 10) + '0');
}
	else
{
	_putchar((num / 10) + '0');
	_putchar((num % 10) + '0');
}

	_putchar(':');

	if (num2 < 10)
{
	_putchar('0');
	_putchar((num2 % 10) + '0');
}
	else
{
	_putchar((num2 / 10) + '0');
	_putchar((num2 % 10) + '0');
}

	_putchar('\n');
}


}

}
