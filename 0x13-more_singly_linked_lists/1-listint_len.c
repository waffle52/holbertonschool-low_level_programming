#include "lists.h"

/**
 *  listint_len - Entry Point
 * @h: address of head of list
 * Description: returns the number of elements in the given list)?
 * Return: number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	int counter;

	if (h == NULL)
	{
		return (NULL);
	}

	while (h != NULL)
	{
		counter++;

		h = h->next;
	}

	return (counter);
}
