#include <stdlib.h>
#include "lists.h"

/**
 * free_list - to free memory allocated to a linked list
 * @head: the head of the linked list
 */
void free_list(list_t *head)
{
	list_t *a;

	while (head)
	{
		a = head->next;
		free(head->str);
		free(head);
		head = a;
	}
}

