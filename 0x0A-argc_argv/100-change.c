#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(int cents);

/**
 * main - Entry Point
 * @argc: length of argv
 * @argv: an array of arguments
 * Description: prints the minimum number of coins to make change)?
 * Return: 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{
	int cents = 0, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents != 0)
	{
		cents = check(cents);
		coins++;
	}
	printf("%i", coins);
	return (0);
}

/**
 * check - Entry Point
 * @cents: cents to divide
 * Description: divides cents by coin values)?
 * Return: cents
 */
int check(int cents)
{
	if (cents >= 25)
	{
		cents -= 25;
		printf("25:%i\n", cents);
		return (cents);
	}
	else if (cents >= 10)
	{
		cents -= 10;
		printf("10:%i\n", cents);
		return (cents);
	}
	else if (cents >= 5)
	{
		cents -= 5;
		printf("5:%i\n", cents);
		return (cents);
	}
	else if (cents >= 2)
	{
		cents -= 2;
		printf("2:%i\n", cents);
		return (cents);
	}
	else
	{
		cents -= 1;
		printf("1:%i\n", cents);
		return (cents);
	}

	return (cents);
}
