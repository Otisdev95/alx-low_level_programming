#include "hash_tables.h"

/**
 * shash_table_t - Function that creates a sorted hash table.
 * @size: The size of the sorted hash table.
 *
 * Return: A pointer to the new sorted hash table.
 *		Otherwise, return - NULL.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *stc;
	unsigned long int i;

	stc = malloc(sizeof(shash_table_t));
	if (!stc)
		return (NULL);

	stc->size = size;
	stc->array = malloc(sizeof(shash_node_t *) * size);

	if (!stc->array)
		return (NULL);

	for (i = 0; i < size; i++)
		stc->array[i] = NULL;

	stc->shead = NULL;
	stc->stail = NULL;

	return (stc);
}
