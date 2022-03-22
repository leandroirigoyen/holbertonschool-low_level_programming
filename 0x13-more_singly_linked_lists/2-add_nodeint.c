#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds a new node at the beginning
 * @head: A pointer to the address of list
 * @n: The integer
 * Return: If the function fails - NULL.
 *         if not gives the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
