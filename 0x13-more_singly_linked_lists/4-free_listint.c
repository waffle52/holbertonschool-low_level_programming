#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Entry Point
 * @head: address of head node
 * Description: loops through each nodes and free the allocated memory)?
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free (head);
		head = tmp;
	}
	head = NULL;
}
