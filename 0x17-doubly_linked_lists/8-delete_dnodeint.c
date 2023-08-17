#include "lists.h"

/**
* delete_dnodeint_at_index -deletes node at index index of dlistint
* @head:pointer to head
* @index: index at index node
* Return: 1 on success or -1 if it fails
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;

	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}
	while (ptr != NULL && count < index)
	{
		ptr = ptr->next;
		count++;
	}
	if (ptr == NULL)
		return (-1);
	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;
	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;
	free(ptr);
	return (1);
}
