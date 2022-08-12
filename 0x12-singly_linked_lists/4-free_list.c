#include "lists.h"
/**
 * free_list - function that frees memoryt
 * @head: pointer to the adress of head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
