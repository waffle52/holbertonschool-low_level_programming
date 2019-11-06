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
	listint_t *new = *head;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	for (i = 0; new != NULL; i++)
	{
		if (index == 0)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
			return (1);
		}
		else if (i == index)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
			return (1);
		}

		new = new->next;
	}


	return (-1);
}
