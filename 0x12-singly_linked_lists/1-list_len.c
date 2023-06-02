#include "lists.h"
#include <stdlib.h>

/**
 * list_len -calculates number of elemnts in string
 * @h: head
 *
 * Return: elements in h
 */

size_t list_len(const list_t *h)
{
	size_t temp = 0;

	while (h)
	{
		temp++;
		h = h->next;
	}
	return (temp);
}
