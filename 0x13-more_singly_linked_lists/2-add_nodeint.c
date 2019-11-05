#include "lists.h"

/**
 * add_nodeint - Entry Point
 * @head: address of head node
 * @n: number to set list var n to
 * Description: creates a new node at the beginning of the list)?
 * Return: the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
