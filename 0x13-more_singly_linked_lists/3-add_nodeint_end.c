#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint_end -adds node at end of list
* @head: double pointer
* @n: input
* Return: address of new element or
* NULL if it fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (new_node);
}

