#include "lists.h"
/**
 * dlistint_len - return number of elements
 * @h: constant pointer of dlinkedlist
 * Return: number of elements of the dll
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}

	return (length);
}
