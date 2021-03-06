#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_djb2 - Entry Point
 * @str: string to hash
 * Description: Gets a string and hashes it using it djb2 algo)?
 * Return: the hashed result of str
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
