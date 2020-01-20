#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_print - Entry Point
 * @ht: table to print
 * Description: Prints a hash table)?
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int idx = 0;

	if (ht != NULL)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			if (ht->array[idx] != NULL)
			{
				printf("'%s': '%s'", ht->array[idx]->key, ht->array[idx]->value);
				if (idx < ht->size)
				{
					printf(", ");
				}

			}
		}
		printf("}\n");
	}
}
