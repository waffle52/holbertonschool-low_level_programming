#include <stdio.h>

/**
 * main - Entry Point
 * Description prints all possible combinations of two digits)?
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	int i;
	int increase = 2;

	for (i = 1; i <= 90; i++)
	{

		putchar((i / 10) + '0');
		putchar((i % 10) + '0');

		if (i < 89)
		{
			putchar(',');
			putchar(' ');
		}

		if ((i % 10) == 9)
		{
			i += increase;
			increase++;
		}
	}

	putchar('\n');

	return (0);
}
