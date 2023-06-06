#include "lists.h"
#include <stdlib.h>

/**
 * listint_len -returns number of elements in string
 * @h: head
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t temp = 0;

	while (h)
	{
		temp++;
		h = h->next;
	}
	return (temp);
}
