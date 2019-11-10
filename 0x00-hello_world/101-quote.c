#include <stdio.h>

/**
 * main - Entry point
 * @argc: length of argv[]
 * @argv: pointer to char of arguments
 * Description: prints string to the standard error)?
 * Return: 1 (SUCCESS)
 */

int main(int argc, char *argv[])
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 1, sizeof(str), stderr);

	return (1);
}
