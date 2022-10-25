#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - to remove heaf node of a linked list
 * @head: the head of the linked list
 * Return: the data value of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int b;

	if (*head == NULL)
		return (0);
	a = *head;
	b = (*head)->n;
	*head = (*head)->next;
	free(a);
	return (b);
}

