#include "lists.h"

/**
 * delete_nodeint_at_index - Entry Point
 * @head: address of head node
 * @index: index of node to delete
 * Description: deletes the node of the given index)?
 * Return: 1 (SUCCESS)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;
	listint_t *new;

	if (head == NULL)
	{
		return (-1);
	}
	tmp = *head;

	if (index == 0)
	{
		new = *head;
		*head = (*head)->next;
		free(new);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (tmp->next == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
	}
	if (i != index - 1)
	{
		return (-1);
	}
	new = tmp->next;
	tmp->next = new->next;
	free(new);

	return (1);
}
