#include "monty.h"

#define MAXCHAR 1000
/**
 *
 */
/* extern head of list */

int main(int argc, char *argv[])
{
	int line_num = 0;
	int fd;
	FILE *fp;
	char *filename;
	char str[MAXCHAR];

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
		printf("Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	filename = argv[1];

        fp = fopen(filename, "r");
	if (fp == NULL){
		printf("Could not open file %s", filename);
		return 1;
	}
	while (fgets(str, MAXCHAR, fp) != NULL)
	{
		line_num += 1;
	        line_check(str, line_num);
	}
	fclose(fp);

	return (0);
}









/* end of the line */
