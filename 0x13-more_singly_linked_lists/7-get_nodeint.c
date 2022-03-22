#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - Locates a given node of list
 * @head: A pointer to the head of the list
 * @index: indices start at 0
 * Return: if not exist = NULL.
 *         if exist = node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

return (head);
}
