#include "monty.h"

/**
 *
 */

int main(int argc, char *argv[])
{
	int line_num = 0;
	int fd;
	/* char *buf; word */

	/* start of the line */
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	(void)line_num;

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		printf("Error: Can't open file %s\n", argv[0]);
		return (EXIT_FAILURE);
	}

	

	return (0);
}










































































/* end of the line */
