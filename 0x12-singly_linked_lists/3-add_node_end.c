#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - Entry Point
 * @head: address of head node
 * @str: string to be copied
 * Description: creates a new node at the end of the list)?
 * Return: the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	int i;
	list_t *last;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	last = *head;

	for (i = 0; str[i]; i++)
		;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
