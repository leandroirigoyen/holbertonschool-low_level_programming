#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - Free a list.
 * @head: A pointer to the address of the head list
 * Description: head to null
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
