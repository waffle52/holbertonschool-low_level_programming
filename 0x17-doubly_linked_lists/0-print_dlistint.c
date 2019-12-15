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

	while(node)
	{
		printf("%d\n", node->n);
		node = node->next;
		counter++;
	}

	return (counter);
}
