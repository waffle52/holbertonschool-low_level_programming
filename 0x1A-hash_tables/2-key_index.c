#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * key_index - Entry Point
 * @key: the key in the array to source
 * @size: the size of the array of the hash table
 * Description: Retrives the index of a key)?
 * Return: Index of the key/value pair is found
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int result;

	hash = hash_djb2(key);
	result = hash % size;

	return (result);
}
