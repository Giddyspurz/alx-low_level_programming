#include "lists.h"
/**
 *print_listint - prints all the element of a listint_t list
 *@h: header of the list
 *
 *Return: node_number number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int node_number = 0;

	while (h)
		printf("%i\n", h->n), node_number++, h = h->next;

	return (node_number);
}
