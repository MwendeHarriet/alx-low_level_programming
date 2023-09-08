#include "hash_tables.h"

/**
* hash_table_print - Prints d hash_tab.
* @ht: D hash_tab 2 print.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *node;
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
