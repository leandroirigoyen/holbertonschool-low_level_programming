#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Free the list
 * @head: A pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
