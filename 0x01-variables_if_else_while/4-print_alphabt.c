#include <stdio.h>

/**
 * main - Entry point
 * Description: loops trhough ascii code and displays a - z)?
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 97;

while (i < 123)
{
if (i != 101 && i != 113)
{
putchar(i);
}
i++;
}
putchar('\n');

return (0);
}
