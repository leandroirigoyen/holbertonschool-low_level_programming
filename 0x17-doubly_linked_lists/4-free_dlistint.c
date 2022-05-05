#include "lists.h"
/**
 * free_dlistint - frees a dlinkedlist
 * @head: pointer
 * Return: ll
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
