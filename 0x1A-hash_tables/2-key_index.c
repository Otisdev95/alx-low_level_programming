#include "hash_tables.h"

/**
 * key_index - Function that gives the index of a key
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * Return: The index of the key
 * Description: Uses the hash_djb2
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
