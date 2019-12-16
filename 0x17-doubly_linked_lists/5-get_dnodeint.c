#include "lists.h"

/**
 * get_dnodeint_at_index - Entry Point
 * @head: head node of the linked list
 * @index: node number in linked list to get
 * Description: Finds and returns the node at the given index)?
 * Return: node at index given
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *node = head;

	while (node)
	{
		node = node->next;
		counter++;
		if (counter == index)
		{
			break;
		}
	}

	return (node);
}
