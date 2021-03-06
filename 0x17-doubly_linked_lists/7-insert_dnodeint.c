#include "lists.h"

/**
 * insert_dnodeint_at_index - Entry Point
 * @h: head of linked list
 * @idx: index for new node
 * @n: value for new node
 * Description: Adds a new node at the given index)?
 * Return: Address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *node = *h;
	dlistint_t *last = *h;
	unsigned int counter = 0;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	while (counter != idx)
	{
		node = node->next;
		last = node->prev;
		counter++;

		if (node == NULL)
		{
			new_node = NULL;
			return (new_node);
		}
	}

	last->next = new_node;

	new_node->n = n;

	if (node != NULL)
	{
		new_node->next = node;
		new_node->prev = last;
		node->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
		new_node->prev = last;
	}

	return (new_node);
}
