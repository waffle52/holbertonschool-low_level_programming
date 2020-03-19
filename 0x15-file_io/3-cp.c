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
	int fd, fd2;
	int cl;
	ssize_t count;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY); /* file from */
	if (fd < 0)
		err_quit("Error: Can't read from file", argv[1], 98);

	fd2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664); /* file to */
	if (fd2 < 0)
		err_quit("Error: Can't write to", argv[2], 99);

	while ((count = read(fd, buf, sizeof(buf))) != 0)
	{
		if (count < 0)
			err_quit("Error: Can't read from file", argv[2], 98);

		if (write(fd2, buf, count) < 0)
			err_quit("Error: Can't write to", argv[2], 99);
	}
	cl = close(fd);
	if (cl < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	cl = close(fd2);
	if (cl < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}

/**
 * err_quit - print error message and exit
 * @message: error message to print
 * @context: file name to be used with error message
 * @status: status code to use when exiting
 * Description: Prints error message and exists with status passed
 */
void err_quit(char *message, char *context, int status)
{
	if (context != NULL && strcmp(context, "") != 0)
		dprintf(2, "%s %s", message, context);
	else
		dprintf(2, "%s", message);
	exit(status);
}
