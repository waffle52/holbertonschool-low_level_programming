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
	hash_node_t *tmp;
	int first = 1;

	if (ht != NULL)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			if (ht->array[idx] != NULL)
			{
				tmp = ht->array[idx];
				while (tmp != NULL)
				{
					if (idx < ht->size && first == 0)
					{
						printf(", ");
					}

					printf("'%s': '%s'", tmp->key, tmp->value);
					first = 0;
					tmp = tmp->next;
				}
			}
		}
		printf("}\n");
	}
}
