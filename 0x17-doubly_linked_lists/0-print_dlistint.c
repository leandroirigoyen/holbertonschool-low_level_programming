#include "lists.h"
/**
 * print_dlistint - print double linked list
 * @h: constant pointer linked list
 * Return: nodes
 */
size_t print_dlistint(const dlistint_t *h)
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
