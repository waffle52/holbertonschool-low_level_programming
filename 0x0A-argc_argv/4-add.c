#include "ctype.h"
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: length of argv[]
 * @argv: pointer to char of arguments
 * Description: adds positive numbers)?
 * Return: 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{
	int i;
	int num;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
			{
				num += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%i\n", num);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
