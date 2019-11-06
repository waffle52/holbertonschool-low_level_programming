#include "lists.h"

/**
 * insert_nodeint_at_index - Entry Point
 * @head: address of head node
 * @idx: index to add node
 * @n: number to assign to new node
 * Description: creates a new node at the given index)?
 * Return: the new node created
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL || idx == 0)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	for (i = 0; tmp != NULL; i++)
	{
		if (idx == 0)
		{
			new_node->n = n;
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		else if (i == (idx - 1))
		{
			new_node->n = n;
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}

		tmp = tmp->next;
	}

	free(new_node);
	return (NULL);
}
