#include "lists.h"

/**
 * print_listint -prints all elements in list
 * @h: head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->next);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
