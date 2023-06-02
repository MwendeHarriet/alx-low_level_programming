#include "lists.h"
#include <stdio.h>

/**
 * print_list -prints all the elements of list
 * @h: head
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int *temp = 0;

	list_t = temp;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else 
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		temp++
	}
	return (s);
}
