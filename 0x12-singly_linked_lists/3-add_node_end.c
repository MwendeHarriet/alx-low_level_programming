#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_node_end -adds node at end of list
 * @head: double pointer
 * @str: strin to add node
 * Return: addresss of new element or
 * NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;

	list_t *temp = *head;

	list_t *tail;

	while (str[len])
		len++;

	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);

	tail->str = strdup(str);
	tail->len = len;
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
		return (tail);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = tail;

	return (tail);
}
