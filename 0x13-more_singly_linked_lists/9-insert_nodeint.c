#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -inerts new node at a given
 * position
 * @head: head
 * @n: input
 * @idx: position where new node should be added (starting from 0)
 *
 * Return: address of new node or
 * NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int index;
	listint_t *temp_node = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || *head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (index = 0; temp_node && index < idx; index++)
	{
		if (index == idx - 1)
		{
			new_node->next = temp_node->next;
			temp_node->next = new_node;
			return (new_node);
		}
		else
			temp_node = temp_node->next;
	}
	free(new_node);
	return (NULL);
}
