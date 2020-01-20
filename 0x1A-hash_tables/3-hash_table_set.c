#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Entry Point
 * @ht: Hash table
 * @key: Key of elemenet to add to table
 * @value: Value of element to add to table
 * Description: adds an element to a hash table)?
 * Return: 1 (Success)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;

	if (ht == NULL || strcmp(key, "") == 0)
	{
		return (0);
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);

	handler(ht, node);

	return (1);
}

/**
 * handler - Entry Point
 * @ht: hash table
 * @node: node to add to table
 * Description: adds node to table)?
 */

void handler(hash_table_t *ht, hash_node_t *node)
{
	unsigned long int idx = key_index((unsigned char *)node->key, ht->size);
	hash_node_t *tmp = ht->array[idx];

	if (ht->array[idx] != NULL)
	{
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, node->key) == 0)
			{
				break;
			}
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			node->next = ht->array[idx];
			ht->array[idx] = node;
		}
		else
		{
			free(tmp->value);
			tmp->value = strdup(node->value);
			free(node->value);
			free(node->key);
			free(node);
		}
	}
	else
	{
		node->next = NULL;
		ht->array[idx] = node;
	}
}
