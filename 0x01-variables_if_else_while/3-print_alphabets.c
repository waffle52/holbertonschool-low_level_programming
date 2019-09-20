#include <stdio.h>

/**
 * main - Entry point
 * Description: loops trhough ascii code and displays a - z, A - Z)?
 * Return: Always 0 (Success)
 */

int main(void)
{

int num = 97;
int num2 = 65;

while (num < 123)
{
putchar(num);
num++;
}

while (num2 < 91)
{
putchar(num2);
num2++;
}

putchar('\n');

return (0);
}
