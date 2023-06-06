#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -frees list
 * @head: head
 * Return: nothing
 */

void free_listint(listint_t *head)
{
		listint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
