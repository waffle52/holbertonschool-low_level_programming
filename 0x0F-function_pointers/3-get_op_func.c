#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * *get_op_func - Entry Point
 * @s: given string to find symbol to match
 * Description: matches s to symbol in struct and returns f to call function)?
 * Return: integer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].f)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);

}
