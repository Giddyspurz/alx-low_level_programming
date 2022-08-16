#include "lists.h"

/**
 * free_listint_safe - free a list
 * @h: list
 *
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		EXIT_FAILURE;
	temp = (*h);
	if (temp == NULL)
	{
		free(temp);
		return (0);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i++);
}
