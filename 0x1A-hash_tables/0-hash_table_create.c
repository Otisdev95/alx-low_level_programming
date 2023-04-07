#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table
 *		Otherwise return - NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htc;
	unsigned long int h;

	htc = malloc(sizeof(hash_table_t));
	if (!htc)
		return (NULL);

	htc->size = size;
	htc->array = malloc(sizeof(hash_node_t *) * size);

	if (!htc->array)
		return (NULL);

	for (h = 0; h < size; h++)
		htc->array[h] = NULL;

	return (htc);
}
