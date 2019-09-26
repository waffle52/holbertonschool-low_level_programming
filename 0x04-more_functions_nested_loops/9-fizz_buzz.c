#include <stdio.h>

/**
 * main - Entry point
 * Description: replace 0 to 100 with words or print number)?
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0) /* 3 and 5 */
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0) /* 3 */
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0) /* 5 */
		{
			if (i == 100)
			{
				printf("Buzz");
			}
			else
			{
			printf("Buzz ");
			}

		}
		else
		{
			printf("%i ", i);
		}
	}
	printf("\n");

	return (0);
}
