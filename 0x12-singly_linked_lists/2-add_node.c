#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - Entry Point
 * @head: address of head node
 * @str: string to be copied
 * Description: creates a new node at the beginning of the list)?
 * Return: the new node added to the beginning of list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
