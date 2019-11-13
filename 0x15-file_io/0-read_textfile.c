#include "holberton.h"
#include <unistd.h>
#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - Entry Point
 * @filename: name of file given
 * @letters: number of letters to print up to
 * Description: Reads a txt file to print it out to the POSIX standard output)?
 * Return: the number of letters it can actually read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, read_num, written, cl;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	read_num = read(fd, buf, letters);

	if (read_num == -1)
		return (0);

	written = write(STDOUT_FILENO, buf, read_num);

	if (written == -1)
		return (0);

	cl = close(fd);
	if (cl == -1)
		return (0);

	free(buf);
	return (read_num);
}
