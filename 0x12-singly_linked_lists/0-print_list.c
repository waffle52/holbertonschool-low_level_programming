#include "lists.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_list - Entry Point
 * @h: variable of type list_t struct
 * Description: prints string of each node and loops node to node)?
 * Return: number of nodes looped through
 */

size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		counter++;
	}

	return (counter);
}
