#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - Prints all the elements
 * @h: A pointer to the head of the liss
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
