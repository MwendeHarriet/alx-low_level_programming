#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint -returns sum of all the data (n)
 * @head: head
 * Return: sum or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp_node = head;
	int sum = 0;

	if (temp_node == NULL)
		return (0);

	while (temp_node)
	{
		sum += temp_node->n;
		temp_node = temp_node->next;
	}

	return (sum);
}
