#include "lists.h"
/**
 *free_listint2 - frees a listint_t list and sets head to NULL
 *@head: head of the list
 *
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head)
	{
		aux = *head;
		while (*head)
			*head = (*head)->next, free(aux), aux = *head;
		head = NULL;
	}
}
