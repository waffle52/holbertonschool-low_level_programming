#include "lists.h"

/**
 * pop_listint - Entry Point
 * @head: address of head node
 * Description: deletes the head node and returns the data of the head node)?
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *temp = *head;
	listint_t *holder;

	if (head == NULL)
	{
		return (0);
	}

	if (temp != NULL)
	{
		holder = temp->next;
		num = temp->n;
		free(temp);
		*head = holder;
	}

	return (num);
}
