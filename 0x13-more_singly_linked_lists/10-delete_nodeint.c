#include "lists.h"
/**
 *delete_nodeint_at_index - deletes the node at index of a listint_t
 *@head: head of the list
 *@index: index
 *
 *Return: -1 if the operation fails or 1 if it succeeded
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux, *aux2;

	aux = *head;
	if (!index && *head)
		*head = (*head)->next, free(aux);
	else
	{
		while (aux && i < index - 1)
			aux = aux->next, i++;
		if (!aux)
			;
		else
			aux2 = aux->next, aux->next = aux->next->next, free(aux2);
	}

	return (!aux ? -1 : 1);
}
