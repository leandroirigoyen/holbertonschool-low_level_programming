#include "lists.h"
/**
 * add_dnodeint_end - add new node at the end of dlinkedlist
 * @head: double pointer
 * @n: const int
 * Return: adress of new elemento or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t  *current = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (!*head)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (current->next != NULL)
		current = current->next;
	newnode->prev = current;
	current->next = newnode;
	return (newnode);
}
