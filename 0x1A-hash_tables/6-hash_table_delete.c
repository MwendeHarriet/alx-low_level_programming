#include "hash_tables.h"

/**
* free_list - frees a linked list of hash nodes
* @head: pointer to the head
*/
void free_list(hash_node_t *head)
{
	hash_node_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
}

/**
* hash_table_delete - this function deletes hash_tab.
* @ht: pointer to the hash _tab
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free_list(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
