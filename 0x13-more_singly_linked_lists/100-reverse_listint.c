#include "lists.h"
/**
 *reverse_listint - reverse a list
 *@head: head of the list
 *
 *Return: *head address of the new first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux, *aux2;

	if (head && *head)
	{
		aux = *head;
		aux2 = aux->next;
		aux->next = NULL;
		while (aux2)
		{
			aux = aux2;
			aux2 = aux2->next;
			aux->next = *head;
			*head = aux;
		}
		return (*head);
	}

	return (NULL);
}
