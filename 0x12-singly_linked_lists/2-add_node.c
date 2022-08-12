#include "lists.h"

/**
 * add_node - add new node at
 * beginning of list
 * @head: new head
 * @str: string to add
 * Return: new list
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t length, i;
	/* create temp struct to hold new struct */
	list_t *temp = malloc(sizeof(list_t));

	i = 0;
	length = 0;
	if (temp == NULL)
		return (NULL);
	/**
	 * struct pointed by temp, into it assign head
	 * that is first value in list
	 */
	temp->next = *head;
	/**
	 * in temp, copy new string(str) and
	 * length of string to temp
	 */
	temp->str = strdup(str);
	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	temp->len = length++;
	/* copy temp to head making new struct first value */
	*head = temp;
	return (*head);
}
