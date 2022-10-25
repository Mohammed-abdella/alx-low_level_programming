#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - to free memory allocated for list and set head to null
 * @head: the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *a;

	if (head == NULL)
		return;
	while (*head)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
	}
	head = NULL;
}

