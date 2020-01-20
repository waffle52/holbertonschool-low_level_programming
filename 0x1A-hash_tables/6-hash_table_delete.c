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
	int idx;
	int size;

	if (ht != NULL)
	{
		size = ht->size;
		for (idx = 0; idx < size; idx++)
		{
			free(ht->array[idx]->key);
			free(ht->array[idx]->value);
			free(ht->array[idx]);
			free(ht);
		}
	}
}
