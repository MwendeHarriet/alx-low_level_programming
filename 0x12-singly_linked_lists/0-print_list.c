#include "lists.h"
#include <stdio.h>

/**
 * print_list -prints all the elements of list
 * @h: head
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t temp = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else 
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		temp++
	}
	return (s);
}
