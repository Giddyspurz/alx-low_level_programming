#include "lists.h"

/**
 * add_node_end - add node at end of list
 * @head: head of list
 * @str: string to be added
 *
 * Return: new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *hold;
	size_t i = 0, length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	/* assign values to temp struct */
	while (str[i] != '\0')
	{
		i++;
		length++;
	}
	if (*head == NULL)
	{
		free(temp);
		(*head) = malloc(sizeof(list_t));
		if ((*head) == NULL)
		{
			return (NULL);
		}
		(*head)->str = strdup(str);
		(*head)->len = length++;
		(*head)->next = NULL;
	}
	else
	{
		hold = *head;
		while ((hold)->next != NULL)
			(hold) = (hold)->next;
		temp->str = strdup(str);
		temp->len = length++;
		temp->next = NULL;
		hold->next = temp;
	}
	return (*head);
}
