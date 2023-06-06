#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -deletes node at given index of linked list
 * @head: double pointer
 * @index: index of node to delete starting 0
 * Return: on success return 1 or
 * -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int s = 0;

	listint_t *temp_node;
	listint_t *current_node;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}
	temp_node = *head;
	while (s < index - 1)
	{
		if (temp_node == NULL || temp_node->next == NULL)
			return (-1);
		temp_node = temp_node->next;
		s++;
	}

	current_node = temp_node->next;
	temp_node->next = current_node->next;
	free(current_node);

	return (1);
}
