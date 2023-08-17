#include "lists.h"

/**
* insert_dnodeint_at_index - inserts new node at a given position
* @h: pointer to head
* @idx: index position to add new node
* @n: data in the new node*
* Return: address of new node or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;

	dlistint_t *ptr = *h;

	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		if (*h)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	while (ptr != NULL && count < idx - 1)
	{
		ptr = ptr->next;
		count++;
	}
	if (ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = ptr->next;
	new_node->prev = ptr;
	if (ptr->next)
		ptr->next->prev = new_node;
	ptr->next = new_node;
	return (new_node);
}
