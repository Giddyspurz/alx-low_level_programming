#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list
 * @head: linked list
 *
 * Return: no of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = malloc(sizeof(listint_t));
	size_t i = 0;

	if (temp == NULL)
		return (98);
	temp = head;
	if (temp == NULL)
		return (0);
	/*while (temp->next != NULL)
	{
		printf("[*p] %d", temp, temp->n);
		temp = temp->next;
	}*/

	return (i);
}
