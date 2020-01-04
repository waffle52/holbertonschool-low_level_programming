#include "monty.h"

/**
 *
 */

void (*get_func(char *s))(stack_t, unsigned int)
{
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};
	int i = 0;

	  /*if (!stack)
	return (NULL);*/
	while (ops[i].opcode != NULL)
	{
		if (*s == *(ops[i]).opcode)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}

void line_check(char *str, int line_num)
{
	char *keyword;
	void (*point)(stack_t, unsigned int);
	int num = 0;
	int j = 0;
	stack_t head; /* test list */
	(void)line_num;

	keyword = strtok(str, " ");
	j = strlen(keyword) + 1;
	if (isdigit(str[j]))
	{
		num = str[j] - '0';
	}
	point = get_func(keyword);

        point(head, 1);

	(void)num;
}
