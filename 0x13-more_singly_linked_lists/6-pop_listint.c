#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t list and returns the head
 *node's data (n)
 *@head: head of the list
 *
 *Return: 0 if @head is empty or data that is the data stored in the head node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *aux;

	if (!*head)
		return (0);
	aux = *head, data = (*head)->n, *head = (*head)->next;
	free(aux);

	return (data);
}
