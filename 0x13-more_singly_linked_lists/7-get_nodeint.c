#include "lists.h"

/**
 * get_nodeint_at_index - Entry Point
 * @head: address of head node
 * @index: node number to find
 * Description: returns the node based of the given number)?
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		i++;
		if (i == index - 1)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
