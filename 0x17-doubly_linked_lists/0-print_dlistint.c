#include "lists.h"

/**
 * print_dlistint - Entry Point
 * @h: head node of the linked list
 * Description: Prints all elements of linked list given)?
 * Return: number of elements in linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;
	const dlistint_t *node = h;

	if (h == NULL)
	{
		return (0);
	}

	while(node->next)
	{
		printf("%i\n", node->n);
		counter++;
		node = node->next;
	}

	return (counter);
}
