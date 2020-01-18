#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_create - Entry Point
 * @size: size of the array
 * Description: Creates a hash table
 * Return: a pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		printf("Table is NULL");
		return (NULL);
	}

	table->array = malloc(sizeof(char *) * size);
	if (table->array == NULL)
	{
		printf("Table array is NULL\n");
		return (NULL);
	}

	/*memset(table->array, 0, size * sizeof(hash_node_t));*/

	table->size = size;

	return (table);
}
