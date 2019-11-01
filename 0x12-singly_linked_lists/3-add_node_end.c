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
	list_t *temp = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;

	new_node->str = strdup(str);
	new_node->len = i;
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
