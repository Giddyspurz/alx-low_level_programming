#include "lists.h"

/**
 * list_len - returns length of list
 * @h: list
 *
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
