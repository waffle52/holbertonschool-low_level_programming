#include "holberton.h"

/**
 * times_table - Entry point
 * Description: prints tables by 9)?
 * Return: numbers 9 * var.
 */


void times_table(void)
{
	int num1;
	int num2;
	int num3;

for (num1 = 0; num1 < 10; num1++)
{
for (num2 = 0; num2 < 10; num2++)
{
num3 = num1 * num2;
if (num3 < 10)
{
_putchar((num3 % 10) + '0');
if (num2 != 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}

else
{
_putchar((num3 / 10) + '0');
_putchar((num3 % 10) + '0');
if (num2 != 9)
{
_putchar(',');
_putchar(' ');
}
}


}
_putchar('\n');
}

}
