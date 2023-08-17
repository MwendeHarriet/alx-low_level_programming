#include "lists.h"

/**
 * free_dlistint -frees a dlistint
 * @head: pointer to head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (ptr != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
