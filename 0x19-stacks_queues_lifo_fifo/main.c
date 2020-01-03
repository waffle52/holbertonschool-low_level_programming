#include "monty.h"

/**
 *
 */

int main(int argc, char *argv[])
{
	int line_num = 0;
	int fd;

	/* start of the line */
	if (argc != 2)
	{
		printf("USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	(void)line_num;

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		printf("Error: Can't open file %s", argv[0]);
		return (EXIT_FAILURE);
	}

	

	return (0);
}










































































/* end of the line */
