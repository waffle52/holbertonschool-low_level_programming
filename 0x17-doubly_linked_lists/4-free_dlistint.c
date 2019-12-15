#include "lists.h"

/**
 * free_dlistint - Entry Point
 * @head: head of linked list
 * Description: frees a dlistint_t list)?
 * return: void
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
