#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - Entry Point
 * @argc: number of arguments passed
 * @argv: arguments passed to executable
 * Description: Copies the contents of a file to a new one)?
 * Return: 0 (SUCCESS)
 */

int main(int argc, char **argv)
{
	char buf[1024];
	int files[2];
	int cl, cl2;
	ssize_t count;

	if (argc != 3)
		report(buf, 97, NULL, 0);

	files[0] = open(argv[1], O_RDONLY); /* file from */
	if (files[0] == -1)
		report(buf, 98, argv[1], 0);

	files[1] = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664); /* file to */
	if (files[1] == -1)
		report(buf, 99, argv[2], 0);

	while ((count = read(files[0], buf, sizeof(buf))) != 0)
		if (write(files[1], buf, count) == -1)
			report(buf, 99, argv[2], 0);

	cl = close(files[0]);
	if (cl == -1)
		report(buf, 100, NULL, cl);

	cl2 = close(files[1]);
	if (cl2 == -1)
		report(buf, 100, NULL, cl2);

	return (0);

}

/**
 * report - print error and quit
 * @buf: buf to free
 * @code: exit code to use
 * @message: file name to be used when read or write fails
 * @fd: fd value to be used when a file descriptor cannot be closed
 * Description: gets error code and message to print before exit)?
 */

void report(char *buf, int code, char *message, int fd)
{
	if (code == 97)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		free(buf);
		exit(97);
	}

	else if (code == 98)
	{
		dprintf(2, "Error: Can't read from file %s\n", message);
		free(buf);
		exit(98);
	}

	else if (code == 99)
	{
		dprintf(2, "Error: Can't write to %s\n", message);
		free(buf);
		exit(99);
	}

	if (code == 100)
	{
		dprintf(2, "Error: Can't close fd %i", fd);
		free(buf);
		exit(100);
	}
}
