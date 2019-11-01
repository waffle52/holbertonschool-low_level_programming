#include "lists.h"
#include <stdio.h>


/**
 * add_node_end - Entry Point
 * @head: address of head node
 * @str: string to be copied
 * Description: creates a new node at the end of the list)?
 * Return: the new node
 */

void free_list(list_t *head)
{

	list_t *tmp;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free (tmp);
	}
}
