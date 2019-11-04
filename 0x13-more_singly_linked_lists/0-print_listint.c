#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Entry Point
 * @h: a list of type listint_t
 * Description: prints all elements of listint_t list)?
 * Return: values of all elements in h
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
