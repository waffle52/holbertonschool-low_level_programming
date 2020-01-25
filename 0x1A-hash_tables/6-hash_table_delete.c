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
	unsigned long int idx;
	hash_node_t *tmp;
	hash_node_t *tmp2;

	for (idx = 0; idx < ht->size; idx++)
	{
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			free(tmp->key);
			free(tmp->value);
			tmp2 = tmp->next;
			free(tmp);
			tmp = tmp2;
		}
		/*free(ht->array[idx]);*/
	}
	free(ht->array);
	free(ht);
}
