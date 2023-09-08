#include "hash_tables.h"

/**
*shash_table_create -this creates a new sorted hash_table.
* @size: Size of d arr
* Return: Points to d newly created hash_tab or NULL(fail.
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(size * sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}

/**
* shash_table_set - this function adds an element to a sorted hash map
* @ht: D hash_tab
* @key: D key 2 add or update
* @value: D val associated wit d key.
* Return: 1(successful) or 0(fail).
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node = NULL, *prs = NULL;

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
		prs = prs->snext;
	}
	new_node = malloc(sizeof(shash_node_t));
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

/**
* shash_table_print - Prints d hash_tab.
* @ht: D hash_tab 2 print.
*/
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int n;
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		node = ht->array[n];
		while (node != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}


