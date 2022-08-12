#include "lists.h"
/**
 * list_len - function that returns count of elements
 * @h: pointer to the node
 * Return: @count the existing number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *current;

	current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
