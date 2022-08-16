#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: head of the list
 *@idx: Index
 *@n: data for new node
 *
 *Return: NULL if malloc fails or if node at index cannot be added or address
 *of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node;
	listint_t *aux;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!idx)
		new_node->next = *head, *head = new_node;
	else
	{
		aux = *head;
		while (aux && i < idx - 1)
			aux = aux->next, i++;
		if (!aux)
			;
		else
			new_node->next = aux->next, aux->next = new_node;
	}

	return (!aux ? NULL : new_node);
}
