#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlistint
 * @head: pointer to pointer
 * @index: index node
 * Return: Pointer of nth node or NULL does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
