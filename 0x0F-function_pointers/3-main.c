#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry Point
 * @argc: size of argv
 * @argv: inputted data
 * Description: checks for errors and calls function with inputted data)?
 * Return: (0) (SUCCESS)
 */

int main(int argc, char *argv[])
{

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func)(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
