#include "hash_tables.h"

/**
* hash_table_set - this function adds an element to the hash map
* @ht: D hash_tab
* @key: D key 2 add or update
* @value: D val associated wit d key.
* Return: 1(successful) or 0(fail).
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL, *prs = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	prs = ht->array[index];
	while (prs)
	{
		if (strcmp(prs->key, key) == 0)
		{
			free(prs->value);
			prs->value = strdup(value);
			if (prs->value == NULL)
				return (0);
			return (1);
		}
		prs = prs->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
