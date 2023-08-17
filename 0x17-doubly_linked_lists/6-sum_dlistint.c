#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the of data n *
 * @head: pointer to head
 * Return: sum of the data n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
