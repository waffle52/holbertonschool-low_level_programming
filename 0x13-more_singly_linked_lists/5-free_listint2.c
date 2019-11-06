#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Entry Point
 * @head: address of head node
 * Description: loops through each nodes and free the allocated memory)?
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = *head;

		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
