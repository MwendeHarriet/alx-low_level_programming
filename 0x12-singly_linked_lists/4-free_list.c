#include "lists.h"
#include <stdlib.h>

/**
 * free_list -frees list
 * @head: head
 * Return: nothing
 */

void free_list(list_t *head)
{
		list_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
}
