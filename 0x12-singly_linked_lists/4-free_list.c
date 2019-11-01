#include "lists.h"
#include <stdio.h>


/**
 * free_list - Entry Point
 * @head: address of head node
 * Description: loops through each nodes and free the allocated memory)?
 */

void free_list(list_t *head)
{

	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
