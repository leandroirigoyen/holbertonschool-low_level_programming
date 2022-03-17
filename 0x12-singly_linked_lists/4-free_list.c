#include <stdlib.h>
#include "lists.h"

/**
  * free_list - free list
  * @head: pointer to list t first element
  * Return: 0
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
