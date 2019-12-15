#include "lists.h"

/**
 * print_dlistint - Entry Point
 * @h: head node of the linked list
 * Description: Prints all elements of linked list given)?
 * Return: number of elements in linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
