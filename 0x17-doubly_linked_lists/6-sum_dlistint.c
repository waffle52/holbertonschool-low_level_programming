#include "lists.h"

/**
 * sum_dlistint - Entry Point
 * @head: head of doubly linked list
 * Description: Retreives the sum of all the nodes data)?
 * Return: The sum of all the data (n)
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
