#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -return the nth node of
 * a list
 * @head: head
 * @index: index of node to retrieve
 * Return: pointer to nth node or
 * NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	unsigned int num = 0;

	while (temp && num < index)
	{
		temp = temp->next;
		num++;
	}

	return (temp ? temp : NULL);
}
