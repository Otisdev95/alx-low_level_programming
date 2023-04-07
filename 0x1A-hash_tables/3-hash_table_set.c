#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: The pointer to the hash table to add key/value to.
 * @key: The key and it cannot be an empty string.
 * @value: Associated with the key, must be duplicated and can be empty string
 *
 * Return: 1 if it succeeded.
 *		Otherwise, return - 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *new_value;
	unsigned long int index, h;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	new_value = strdup(value);
	if (!new_value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (h = index; ht->array[h]; h++)
	{
		if (strcmp(ht->array[h]->key, key) == 0)
		{
			free(ht->array[h]->value);
			ht->array[h]->value = new_value;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(new_value);
		return (0)
	}

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}

	node->value = new_value;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
