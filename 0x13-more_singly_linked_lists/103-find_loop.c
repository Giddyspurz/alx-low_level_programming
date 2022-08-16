#include "lists.h"

/**
 * find_listint_loop - finds loop in a linked list
 * @head: linked list
 *
 * Return: address where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		if ((temp->next) == (head->next)->next)
			return (temp);
	}
	return (temp);
}

