#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - to free memory allocated to a linked list
 * @head: the head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *a;

	while (head)
	{
		a = head->next;
		free(head);
		head = a;
	}
}

