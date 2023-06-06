#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -frees list
 * @head: head
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
		listint_t *new_node;

	if (head == NULL)
		return;

	while (*head)
	{
		new_node = (*head)->next;
		free(*head);
		*head = new_node;
	}
	*head = NULL;
}
