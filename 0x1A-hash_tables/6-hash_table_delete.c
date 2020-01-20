#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_delete - Entry Point
 * @ht: Table to delete
 * Description: Deletes hash table)?
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int idx;
	hash_node_t *tmp;

	if (ht != NULL)
	{
		for (idx = 0; idx < ht->size; idx++)
		{
			if (ht->array[idx] != NULL)
			{
				tmp = ht->array[idx]->next;
				free(ht->array[idx]->key);
				free(ht->array[idx]->value);
				free(ht->array[idx]);
				ht->array[idx] = tmp;
			}
			free(ht->array[idx]);
		}
	}
	free(ht->array);
	free(ht);
}
