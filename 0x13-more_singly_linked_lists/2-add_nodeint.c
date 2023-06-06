#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * add_nodeint -adds node to beginning of list
 * @head: double pointer
 * @n: input
 * Return: addresss of new element or
 * NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
 	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
