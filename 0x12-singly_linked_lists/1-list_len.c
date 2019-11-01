#include "lists.h"

/**
 * list_len - Entry Point
 * @h: variable of type list_t struct
 * Description: prints number of elements looped through)?
 * Return: number of elements looped through
 */

size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
		counter++;
		}
		h = h->next;
	}

	return (counter);
}
