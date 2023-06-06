#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -deletes head node
 * @head: double pointer
 * Return: head node’s data (n) or
 * 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *new_node;

	if (*head == NULL)
		return (0);

	new_node = *head;
	data = new_node->n;
	*head = (*head)->next;

	free(new_node);

	return (data);
}
