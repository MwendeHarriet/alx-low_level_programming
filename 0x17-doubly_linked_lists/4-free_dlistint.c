#include "lists.h"

/**
 * free_dlistint -frees a dlistint
 * @head: pointer to head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
	free(ptr);
}
