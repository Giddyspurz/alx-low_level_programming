#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: head of the list
 *@n: data
 *
 *Return: new_node address of the new created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *aux;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		aux = *head;
		while (aux->next)
			aux = aux->next;
		aux->next = new_node;
	}
	return (new_node);
}
