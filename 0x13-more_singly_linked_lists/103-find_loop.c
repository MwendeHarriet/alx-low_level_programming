#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop -finds loop in linked list
 * @head: head
 * Return: address of node where loop starts
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *kame = head;
	listint_t *nousagi = head;

	if (head == NULL || head->next == NULL)
		return (NULL);

	while (kame && nousagi && nousagi->next)
	{
		nousagi = nousagi->next->next;
		kame = kame->next;
		if (fast == kame)
		{
			kame = head;
			while (kame != nousagi)
			{
				kame = kame->next;
				nousagi = nousagi->next;
			}
			return (nousagi);
		}
	}

	return (NULL);
}
