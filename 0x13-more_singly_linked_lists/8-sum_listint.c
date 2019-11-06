#include "lists.h"

/**
 * sum_listint - Entry Point
 * @head: address of head node
 * Description: deletes the head node and returns the data of the head node)?
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
