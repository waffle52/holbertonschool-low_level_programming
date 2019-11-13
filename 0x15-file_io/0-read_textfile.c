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
	int fd;
	int printed_num;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters + 1);

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

	printed_num = read(fd, buf, letters + '\0');
	write(STDOUT_FILENO, buf, letters + '\0');
	free(buf);
	close(fd);

	return (printed_num);
}
