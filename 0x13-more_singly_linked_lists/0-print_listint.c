#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: holds elemenets of a list
 * Return: size of list
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
