#include "lists.h"

/**
 * dlistint_len - Entry Point
 * @dlistint_t: head node of linked list
 * Description: Counts the number of elements in a linked list)?
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->n != 0)
		{
			counter++;
		}
		h = h->next;
	}

	return (counter);
}
