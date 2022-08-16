#include "lists.h"
/**
 *find_loop - finds if a list has a loop
 *@head: head of the list
 *
 *Return: NULL if the list does not has a loop or the address where the loop
 *starts if the list has a loop
 */
listint_t *find_loop(const listint_t *head)
{
	const listint_t *aux, *aux2;

	if (!head->next)
		return (NULL);
	aux = head, aux2 = head;
	aux = aux->next, aux2 = aux2->next->next;
	while (aux2 && aux2->next)
	{
		if (aux == aux2)
			break;
		aux = aux->next, aux2 = aux2->next->next;
	}
	if (aux != aux2)
		return (NULL);
	aux = head;
	while (aux != aux2)
	{
		aux = aux->next, aux2 = aux2->next;
	}

	return ((void *)aux);
}
/**
 *print_listint_safe - print a list
 *@head: head of the list
 *
 *Return: number of the nodes of the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *aux, *aux2;
	int flag_print = 1, _node = 0;

	if (!head)
		return (98);
	aux2 = find_loop(head);
	aux = head;
	while (aux)
	{
		if (!aux2)
		{
			printf("[%p] %i\n", (void *)aux, aux->n), _node++;
			aux = aux->next;
		}
		else
		{
			if (aux == aux2 && !flag_print)
			{
				printf("-> [%p] %i\n", (void *)aux, aux->n);
				break;
			}
			if (aux == aux2)
			{
				printf("[%p] %i\n", (void *)aux, aux->n);
				flag_print = 0, _node++, aux = aux->next;
			}
			printf("[%p] %i\n", (void *)aux, aux->n), _node++;
			aux = aux->next;
		}
	}

	return (_node);
}
