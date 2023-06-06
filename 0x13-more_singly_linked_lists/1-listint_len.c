#include "lists.h"
#include <stdlib.h>

/**
 * list_len -returns number of elemnts in string
 * @h: head
 *
 * Return: elements in h
 */

size_t listint_len(const listint_t *h);
{
	size_t temp = 0;

	while (h)
	{
		temp++;
		h = h->next;
	}
	return (temp);
}
