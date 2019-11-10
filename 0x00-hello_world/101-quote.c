#include <stdio.h>
#include <unistd.h>

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

	write(2, str, sizeof(str));

	return (1);
}
