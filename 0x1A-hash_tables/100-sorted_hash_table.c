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

/**
 * shash_table_get - Function that retrieves the sorted value associated
 *	with number.
 * @ht: The hash table in focus.
 * @key: The key in search
 *
 * Return: The value associated with the element.
 *		Otherwise - NULL if key could not be found.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key , ht->size);

	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];

	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->next;

	return ((!node) ? NULL : node->value);
}
