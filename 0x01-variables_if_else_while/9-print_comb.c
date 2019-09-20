#include <stdio.h>

/**
 * main - Entry point
 * Description: loops trhough ascii code and displays a - z, A - Z)?
 * Return: Always 0 (Success)
 */

int main(void)
{
int num = 0;

while (num < 10)
{
putchar((num % 10) + '0');

if (num != 9) 
{
putchar(',');
putchar(' ');
}

num++;
}

putchar('\n');

return (0);
}
