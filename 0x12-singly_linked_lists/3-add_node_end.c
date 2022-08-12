#include "lists.h"
/**
 * _strlen - finding the lenght of a string.
 * @s: first pointer
 * Return: it returns the length of the string.
 */
int _strlen(char *s)
{
	int str;

	str = 0;
	while (s[str] != '\0')
	{
		str++;
	}
	return (str);
}
/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: pointer to the addres of head
 * @str: pointer to the string of each new node
 * Return: addres to the new head node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	if (!head)
		return (0);
	last = *head;/*last will have the value of head*/
	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->str = strdup(str);
	new->len = _strlen((char *)str);
	new->next = NULL;/*because next will be always null*/
	if (*head == NULL)/*for the fisrt case*/
	{
		*head = new;
		return (*head);
	}
	while (last->next)/*Unil it gest to the NULL*/
		last = last->next;/*last will be the next of the last*/
	last->next = new;/*in case next is null already*/
	return (*head);
}
