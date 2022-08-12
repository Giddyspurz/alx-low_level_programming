#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elements
 * of a list_t list
 * @h: elements of list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 1;

	if (h == NULL)
		EXIT_FAILURE;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	printf("[%d] %s\n", h->len, h->str);
	if (h->next != NULL)
	{
		h = h->next;
		count += print_list(h);
	}
	else if (h->next == NULL)
		return (1);
	return (count);

}
