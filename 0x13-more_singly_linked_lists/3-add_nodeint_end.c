#include "lists.h"

/**
 * add_nodeint_end - Entry Point
 * @head: address of head node
 * @n: integer to be added to listint_s structure
 * Description: creates a new node at the end of list)?
 * Return: the new node added to the end of list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

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
	new_node->next = NULL;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	temp->next = new_node;
	}

	return (new_node);
}
