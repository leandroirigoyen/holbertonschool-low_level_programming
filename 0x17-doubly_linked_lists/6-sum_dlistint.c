#include "lists.h"
/**
 * sum_dlistint - sum all data of n to dll
 * @head: pointer
 * Return: if its empty return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
