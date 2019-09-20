#include <stdio.h>

/**
 * main - Entry point
 * Description: loops trhough ascii code and displays a - z, A - Z)?
 * Return: Always 0 (Success)
 */

int main(void)
{
int num = 0;
int num2 = 97;

while (num < 10)
{
putchar((num % 10) + '0');
num++;
}

while (num2 < 103)
{
putchar(num2);
num2++;
}

putchar('\n');

return (0);
}
