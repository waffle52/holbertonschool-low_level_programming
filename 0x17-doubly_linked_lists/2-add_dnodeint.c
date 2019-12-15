#include "lists.h"

/**
 * add_dnodeint - Entry Point
 * @head: Head node of linked list
 * @n: data for new node of type int
 * Description: adds a new node at the beginning of a list)?
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = new_node;
	}

	(*head) = new_node;

	return (new_node);
}
