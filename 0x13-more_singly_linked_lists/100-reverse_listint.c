#include <stdlib.h>
#include "lists.h"

/**
 *reverse_listint -reverses linked list
 *@head: head
 *Return: pointer to first node in reversed
 *list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
