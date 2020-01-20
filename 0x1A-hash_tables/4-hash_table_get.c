#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - Entry Point
 * @ht: Hash table to search
 * @key: Key to search for
 * Description: Retrives the value that matches the key given)?
 * Return: value associated with element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int idx;
	char *word;

	if (ht == NULL)
	{
		return (NULL);
	}

	word = strdup(key);
	idx = key_index((unsigned char *)word, ht->size);
	tmp = ht->array[idx];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, word) == 0)
		{
			break;
		}
		tmp = tmp->next;
	}
	free(word);

	if (tmp == NULL)
	{
		return (NULL);
	}

	return (tmp->value);
}
