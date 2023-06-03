#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * add_node -adds node to beginning of list
 * @head: double pointer
 * @str: strin to add node
 * Return: addresss of new element or
 * NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	size_t len = 0;

	while (str[len])
		len++;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = (*head);
	(*head) = temp;

	return (*head);
}
