#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - Entry Point
 * @filename: name of file to be created
 * @text_content: String to write to file
 * Description: creates a file)?
 * Return: 1 (SUCCESS)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, read_num, written, cl;
	int length = strlen(text_content);
	char *buf;

	if (filename == NULL)
	{
		return (-1);
	}
	buf = malloc(sizeof(char) * length);
	if (buf == NULL)
	{
		free(buf);
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
	{
		free(buf);
		return (-1);
	}
	written = write(fd, text_content, length);
	if (written == -1)
		return (-1);
	cl = close(fd);
	if (cl == -1)
		return (-1);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (-1);
	}
	read_num = read(fd, buf, length);
	if (read_num == -1)
		return (-1);
	cl = close(fd);
	if (cl == -1)
		return (-1);
	free(buf);
	return (1);
}
